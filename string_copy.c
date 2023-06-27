#include <stdio.h>
#include <string.h>
void main()
{
    char str1[10] = "hellow";
    char str2[10];

    strcpy(str2, str1);

    printf(" %s", str1);
    printf(" %s", str2);
}