#include <stdio.h>
int fact(n)
{
    if (n >= 1)
    {
        return (n * (fact(n - 1)));
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    printf("Enter a Integer to Calclulate its FActorial : ");
    scanf("%d", &n);
    printf("Factorial of the %d : %d", n, fact(n));
}