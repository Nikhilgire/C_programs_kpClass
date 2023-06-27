#include <stdio.h>
void main()
{
    int a = 10, *p;
    p = &a;
    printf(" value ofa is %d", a);
    printf(" \naddress of a is %u", p);
    printf(" \nvalue at a is %d", *p);
    a = 20;
    printf(" \nvalue at a is %d", *p);
    printf(" \naddress of a is %u", p);
}