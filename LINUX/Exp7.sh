echo "Enter first string:"
read str1
echo "Enter second string:"
read str2

concat_str="$str1$str2"
len_str1=${#str1}
len_str2=${#str2}   
len_concat=${#concat_str}
echo "Concatenated String: $concat_str"
echo "Length of first string: $len_str1"
echo "Length of second string: $len_str2"
echo "Length of concatenated string: $len_concat"
    if [ $len_str1 -gt $len_str2 ]; then
        echo "The first string is longer."
    elif [ $len_str1 -lt $len_str2 ]; then
        echo "The second string is longer."
    else
        echo "Both strings are of equal length."
    fi