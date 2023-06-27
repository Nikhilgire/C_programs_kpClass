#include <stdio.h>
int main()
{
    float n1, n2, sum, sub, mul, div;
    char op;

    printf("Select the operation you want to perform : ( + , - , * , / ) \n");
    scanf("%c", &op);
    printf(" Enter two no's for operation :");
    scanf(" %f %f", &n1, &n2);

    switch (op)
    {
    case '+':
        sum = n1 + n2;
        printf(" Addition =  %f ", sum);
        break;

    case '-':
        sub = n1 - n2;
        printf(" Substraction =  %f ", sub);
        break;

    case '*':
        mul = n1 * n2;
        printf(" Multiplication =  %f ", mul);
        break;

    case '/':
        div = n1 / n2;
        printf(" Division =  %f ", div);
        break;

    default:
        printf("INVALID");
        break;
    }
}