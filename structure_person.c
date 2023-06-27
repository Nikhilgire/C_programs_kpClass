#include<stdio.h>
struct person
{
    char name[100] ;
    int age ;
    int weight
};
void main()
{
     struct person p[3];
 for( int i=1;i<4;i++)
    {
    for(int j=i;j<=i;j++)
{
   
    printf(" enter %d name ",j);
    scanf("%s",&p[i].name);
    printf(" enter %d age ",j);
    scanf("%d",&p[i].age);
    printf(" enter %d weight ",j);
    scanf("%d",&p[i].weight);
    }
}
    printf (" information of three persons : ");

    printf ("\n______________________________________________________________ ");
    for( int i=1;i<4;i++)
    {
    for(int j=i;j<=i;j++)
    
    {
    printf(" \n%d person details are : ",j);
    printf("\n  person name is : %s",p[i].name);
    printf("\n  person age is : %d",p[i].age);
    printf("\n  person weigth is : %d",p[i].weight);
    }
    printf("\n");
    printf("\n");
    }
}
    
