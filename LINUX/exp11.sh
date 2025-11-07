if [ $# -ne 3 ]; then
  echo "Usage: $0 [directory] [extension] [size]"
  echo "Example: $0 /home/parth .txt +1M  -> finds .txt files larger than 1MB"
  exit 1
fi

[ ! -d "$1" ] && echo "Error: Directory not found!" && exit 1

echo "Searching in '$1' for files matching *$2 with size $3..."
find "$1" -type f -name "*$2" -size "$3"
