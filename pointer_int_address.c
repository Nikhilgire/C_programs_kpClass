#include<stdio.h>
void main()
{
    int a=5,*p;
    p=&a;
    printf(" address of a = %u",p);
    p++;
    printf(" address of a = %u",p);
    p--;
    printf(" address of a = %u",p);
    


}