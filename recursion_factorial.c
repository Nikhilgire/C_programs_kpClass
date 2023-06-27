// find the factorial by using recursion

#include <stdio.h>

int fact(int);
void main()
{
    int n;
    printf(" enter any no to find its factorial : ");
    scanf("%d", &n);
    printf(" factorial of no is = %d=%d", n, fact(n));
}
int fact(int n)
{
    if (n >= 1)
        return (n * fact(n - 1));
    else
        return (1);
}