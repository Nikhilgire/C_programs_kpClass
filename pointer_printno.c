#include <stdio.h>
void main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n, i, *ptr;
    ptr = &a;
    printf(" enter a no");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)

        printf("%d\n", a[i]);
    ptr++;
}