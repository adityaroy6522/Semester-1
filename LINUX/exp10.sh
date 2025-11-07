read -p "Enter the directory to search in: " directory
read -p "Enter the file extension to search for (e.g., .txt): " extension
read -p "Enter the minimum file size (e.g., 100k, 1M): " min_size

if [[ -n "$extension" && "$extension" != .* ]]; then
  extension=".$extension"
fi

if [[ -z "$directory" || ! -d "$directory" ]]; then
  echo "Directory '$directory' does not exist." >&2
  exit 1
fi

echo "Searching for files with extension $extension and size greater than $min_size in directory $directory ..."
find "$directory" -type f -name "*$extension" -size +"$min_size" -print
echo "Search completed."