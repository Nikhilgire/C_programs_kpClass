#include <stdio.h>
struct bank
{
    int id;
    char name[10];
    int  balance
};
void main()
{
    struct bank c[2];
    for (int i = 1; i < 3; i++)
    {
        for (int j = i; j <= i; j++)
        {
            printf(" enter %d costumer details  : ", j);
            printf(" \nenter costemer id  :");
            scanf("%d", &c[i].id);
            printf(" \nenter costemer name : ");
            scanf("%s", &c[i].name);
            printf(" \nenter costemer balance : ");
            scanf("%d", &c[i].balance);
        }
    }
    printf(" \ncostumer details whose balance is above 5000  are  : ");

    for (int i = 1; i <3; i++)
    {
        for (int j = i; j <= i; j++)
        {
            
                        if (c[i].balance >= 5000)

            {
                printf("  \n%d costumer details   are  : ", j);

                printf(" \ncostmer id is   %d ", c[i].id);
                printf(" \ncostmer name is %s ", c[i].name);
                printf(" \ncostmer balance is %d", c[i].balance);
            }
        }
    }
}
