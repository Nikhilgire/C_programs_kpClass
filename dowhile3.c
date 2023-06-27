#include <stdio.h>
void main()
{

    int i = 1;
    do
    {

        if ( (i % 5 == 0) && (i % 11 == 0))
        {
            printf("%d\t", i);
        }
        i++;
    } while (i <= 500);
}