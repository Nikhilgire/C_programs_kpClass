#include <stdio.h>
int main()
{
    int num;
    int i,j;
    // printf("Enter number to check Prime :");
    // scanf("%d", &num);

    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j <i; j++)
            if (i % j == 0)
               break;
            if (i == j)
                printf("%d ",i);
        
    }
}