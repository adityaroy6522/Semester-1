# utils/data_loader.py
import os
from torch.utils.data import Dataset, DataLoader
from PIL import Image
import torchvision.transforms as transforms

class PestDataset(Dataset):
    def __init__(self, image_dir, annotations=None, transform=None):
        """
        image_dir: Directory containing images (possibly subdirs by class for classification).
        annotations: For detection tasks, could be a path to a file with bounding box labels.
        transform: torchvision transforms to apply.
        """
        self.transform = transform
        self.samples = []
        if annotations is not None:
            # If an annotation file is provided (e.g., for detection), parse it
            # For simplicity, assume classification scenario: no explicit annotations needed.
            pass
        # If no annotation file, assume directory structure where each subdir is a class
        classes = sorted(os.listdir(image_dir))
        class_to_idx = {cls_name: idx for idx, cls_name in enumerate(classes)}
        for cls in classes:
            cls_dir = os.path.join(image_dir, cls)
            if not os.path.isdir(cls_dir):
                continue
            for fname in os.listdir(cls_dir):
                if fname.lower().endswith(('.jpg', '.png', '.jpeg')):
                    self.samples.append((os.path.join(cls_dir, fname), class_to_idx[cls]))
        # If dataset is very large (like IP102), one might load paths and load images on the fly.

    def __len__(self):
        return len(self.samples)

    def __getitem__(self, idx):
        img_path, label = self.samples[idx]
        img = Image.open(img_path).convert('RGB')
        if self.transform:
            img = self.transform(img)
        else:
            # default transform: resize and tensor normalize
            img = transforms.functional.resize(img, (224, 224))
            img = transforms.functional.to_tensor(img)
        return img, label

def get_dataloader(dataset_name, batch_size=32):
    # Define transformations (could be dataset-specific)
    transform = transforms.Compose([
        transforms.Resize((224, 224)),
        transforms.RandomHorizontalFlip(),
        transforms.ToTensor(),
        transforms.Normalize([0.485, 0.456, 0.406],  # using ImageNet mean/std as placeholder
                             [0.229, 0.224, 0.225])
    ])
    if dataset_name == "IP102":
        train_dir = "./data/IP102/train"
        val_dir = "./data/IP102/val"
    elif dataset_name == "Pest24":
        train_dir = "./data/Pest24/train"
        val_dir = "./data/Pest24/val"
    # (Add other dataset paths or handling as needed)
    else:
        raise ValueError(f"Unknown dataset {dataset_name}")
    train_dataset = PestDataset(train_dir, transform=transform)
    val_dataset = PestDataset(val_dir, transform=transforms.Compose([
        transforms.Resize((224, 224)),
        transforms.ToTensor(),
        transforms.Normalize([0.485, 0.456, 0.406],
                             [0.229, 0.224, 0.225])
    ]))
    train_loader = DataLoader(train_dataset, batch_size=batch_size, shuffle=True, num_workers=4)
    val_loader = DataLoader(val_dataset, batch_size=batch_size, shuffle=False, num_workers=4)
    return train_loader, val_loader