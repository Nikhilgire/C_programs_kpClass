#include <stdio.h>
#include <string.h>
void main()
{

    char str1[] = "hellow";
    char str2[] = "hi";

    int result;

    result = strcmp(str1, str2);
    
    if (result == 0)
    {
        printf(" the strings are equal");
    }
    else
    {
        printf(" the strings are not equal");
    }
}