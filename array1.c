#include <stdio.h>
#include <conio.h>
int main()
{

    int num[10];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf(" enter number");
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("num[%d] = %d\n  ", i, num[i]);
    }
    getch();
}