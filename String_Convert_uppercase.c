#include <stdio.h>
int main()
{
    char str[] = "This is C language";

    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("String in Uppercase Is : %s ", str);
}