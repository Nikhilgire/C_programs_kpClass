#include<stdio.h>
int main()
{
    int x , *ptr ;
    x =110 ;
    ptr = & x ;

    printf("value of x  = %d",x);
    printf("\nvalue at ptr = %d",*ptr);

    return 0;
}