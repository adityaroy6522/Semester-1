echo "Enter the filename:"
read filename
if [ -e "$filename" ]; then
    echo "File exists. Do you want to create a new file? (y/n)"
    read choice
    if [ "$choice" == "y" ]; then
        echo "Enter the contents of the file (Press Ctrl+D to save):"
        cat > "$filename"
        echo "File created."
    else
        echo "File not created."
    fi
else
    echo "File does not exist. Creating file..."
    echo "Enter the contents of the file (Press Ctrl+D to save):"
    cat > "$filename"
    echo "File created."
fi
if [ -e "$filename" ]; then
    lines=$(wc -l < "$filename")
    words=$(wc -w < "$filename")
    chars=$(wc -c < "$filename")
    echo "The file '$filename' has:"
    echo "$lines lines"
    echo "$words words"
    echo "$chars characters"
fi