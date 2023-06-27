#include <stdio.h>
#include <string.h>
void main()
{

    char str[TMP_MAX];
    char ch;
    int count = 0;

    printf(" enter a string : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }

        count++;
    }
    printf(" \ntotal no of word in string is  = %d", count);
}