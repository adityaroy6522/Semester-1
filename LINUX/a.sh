#experiment 4
#



read -p "Enter filename: " filename
if [ -f "$filename" ]; then
    echo "File '$filename' exists. Showing contents:"
    echo "---NONE---"
    cat "$filename"
else
    echo "File '$filename' does not exist."
    read -p "Do you want to create it? (y/n): " choice
    if [ "$choice" = "y" ] || [ "$choice" = "Y" ]; then
        touch "$filename"
        echo "File '$filename' created successfully."
    else
        echo "File not created."
    fi
fi