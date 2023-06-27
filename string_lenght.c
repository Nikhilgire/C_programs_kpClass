#include <stdio.h>
#include <string.h>
void main()
{

    char str[10];
    int length;

    printf(" entr the string  :");
    scanf("%s", str);

    length = strlen(str);

    printf(" the lenght of the string is : %d", length);
}