#include <stdio.h>
int main()
{

    int temp;
    printf(" enter temp in degree celcius : ");
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf(" FREEZING WHETHER");
    }
    else if (temp >= 0 && temp <= 10)
    {
        printf(" IT IS VERY COLD");
    }
    else if (temp >= 10 && temp <= 20)
    {
        printf(" COLD WHEATHER");
    }
    else if (temp >= 20 && temp <= 30)
    {
        printf(" ITS NORMAL WHEATHER");
    }
    else if (temp >= 30 && temp <= 40)
    {
        printf(" ITS HOT ");
    }

    else if (temp >= 40 && temp <= 50)
    {
        printf(" ITS  VERY HOT ");
    }
    else
    {
        printf(" out of range");
    }

    return 0;
}