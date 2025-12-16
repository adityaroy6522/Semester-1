#include <stdio.h>
#include <string.h>

char* REVERSE(char* str);

int main(void)
{
    char input[100];
    printf("Enter string to reverse: ");
    scanf("%s", input);

    printf("Reversed string: %s\n", REVERSE(input));

    return 0;
}

char* REVERSE(char* str)
{
    int length = strlen(str);
    static char reversed_str[100];

    for (int i = 0; i < length; i++)
    {
        reversed_str[i] = str[length - 1 - i];
    }

    reversed_str[length] = '\0';
    return reversed_str;
}
