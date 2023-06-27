#include <stdio.h>
#include <string.h>
void main()
{
    int count = 0;
    int i;
    char ch;
    char str[50];

    printf(" enter a string :");
    gets(str);

    printf(" enter a characetr to find frequency : ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("%c = %d", ch, count);
}