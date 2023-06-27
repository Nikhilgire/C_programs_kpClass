#include <stdio.h>
int main()
{
    int i, num1, num2, maxNum;
    printf("Program to find LCM of two numbers\n");
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    for (i = num1 > num2 ? num1 : num2; i < num1 * num2; i = i + (num1 > num2 ? num1 : num2))
    {
        if (i % num1 == 0 && i % num2 == 0)
            break;
    }
    printf("LCM : %d", i);
}
