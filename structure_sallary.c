#include <stdio.h>

struct sall
{
    char name[10];
    int id;
    int sallary;
}s[2];
void main()
{
    for (int i = 0; i < 3; i++)
    {
    
            
        {
            printf("\nenter  employee details  : ");
            printf("\nenter employee name");
            scanf("%s",&s[i].name);
            printf(" \nenter employee id");
            scanf("%d",&s[i].id);
            printf("\nenter employee sallary");
            scanf("%d",&s[i].sallary);
        }
    }
     printf(" \ndetails of emlpoyees whose sallary is in between 10000 to 20000");
     printf(" \n_____________________________________________________________________________");
    for (int i = 0; i <3; i++)
    {
       
            
        
            if ((s[i].sallary >= 10000) && (s[i].sallary <= 20000))
            {
                printf("  \n employee details are   : ");
                printf("  \nemployee name is : %s",s[i].name);
                printf("  \nemployee id  is : %d",s[i].id);
                printf("  \nemployee sallary is : %d",s[i].sallary);
            }
        
    }
}