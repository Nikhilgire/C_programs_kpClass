#include <stdio.h>
void main()
{
    double a = 5.2, *p;
    p = &a;
    printf(" address of a = %u\n", p);
    p = p + 4;
    printf(" address of a = %u\n", p);
    p = p - 2;
    printf(" address of a = %u\n", p);
}