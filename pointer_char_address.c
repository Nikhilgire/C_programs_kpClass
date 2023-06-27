#include<stdio.h>
void main()
{
    char a='n',*p;
    p=&a;
    printf(" address of a = %u",p);
    p++;
    printf(" address of a = %u",p);
    p--;
    printf(" address of a = %u",p);
    


}