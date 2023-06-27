#include <stdio.h>
int main()
{

    int i = 1;
    do
    {
        if ((i % 2 == 0) && (i % 10 == 0) && (i % 5 == 0))
        {
            printf("%d\t", i);
        }
        i++;

    } while (i <= 100);

    return 0;
}