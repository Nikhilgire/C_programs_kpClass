#include <stdio.h>
int main()
{

    int math, phy, che, total;

    printf("marks obtained in maths");
    scanf("%d", &math);
    printf("marks obtained in physics ");
    scanf("%d", &phy);
    printf("marks obtained in che : ");
    scanf("%d", &che);
    
    total = math + phy + che;
    printf(" total marks :",total);
    

    printf("marks obtained in physics and chemistry :");
    scanf("%d%d", &phy, &che);

    if (math >= 65)
    {
        printf("you are eligible");
    }
    else if (phy >= 55)
    {
        printf("you are eligible");
    }

    else if (che >= 50)
    {
        printf(" you are elgible");
    }
    else
    {
        printf("you are not ");
    }
}
