#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    printf("Values of a and b Before swapping : %d  %d", a, b);

    a = a + b;  
    b = a - b;   
    a = a - b;   

    printf("\nValues of a and b after swapping : %d  %d", a, b);

    return 0 ;
}