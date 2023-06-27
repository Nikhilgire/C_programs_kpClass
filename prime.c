#include <stdio.h>
int main()
{
    int prime = 0;
    int num, i;
    printf("Enter number :\n");
    scanf("%d", &num);

    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}