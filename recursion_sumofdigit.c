/*  
 * C Program to find Sum of Digits of a Number using Recursion
 */
#include <stdio.h>
 
int sum (int a);
 
int main()
{
    int num;
 
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Sum of digits in %d is %d\n", num, sum(num));
    return 0;
}
 
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}