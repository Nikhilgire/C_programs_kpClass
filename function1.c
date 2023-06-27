// with argument without return//

#include <stdio.h>
void add(int, int);
void main()
{
    // passing the value
    add(5, 3);
}
void add(int x, int y)
{
    int sum;
    sum = x + y;
    printf(" addition is = %d", sum);
}