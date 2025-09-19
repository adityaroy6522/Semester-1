#!/bin/bash

# Prompt user for filename
read -p "Enter filename: " filename

# Check if file exists
if [ -f "$filename" ]; then
    echo "File '$filename' exists. Showing contents:"
    echo "----------------------------------------"
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