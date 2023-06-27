#include <stdio.h>
int main()
{
    int num[10];
    int i, n, sum = 0;
    printf(" Enter elements of the array : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d\n", &num[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
        sum = sum + num[i];
    }
    printf("\n sum is : %d", sum);
    getch();
}