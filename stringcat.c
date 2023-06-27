#include <stdio.h>
#include <string.h>
void main()
{
    char str1[10];

    char str2[10];
    printf(" enter the string1: ");
    scanf("%s", &str1);

    printf(" enter the string2: ");
    scanf("%s", &str2);

    strcat(str1, str2);

    printf("string1 : %s\n", str1);
    printf("string2 : %s\n", str2);
}