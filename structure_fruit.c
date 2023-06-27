# include<stdio.h>
struct fruit
{
char name[100];
char colour[100];
int weight;

};
void  main()
{
struct fruit f[3];
 for (int i=1;i<4;i++)
 {
    for(int j=i;j<=i;j++)
    {
    printf(" enter %d fruit details : ",j);
  printf(" \nenter fruit name  :");
  scanf("%s",&f[i].name);
  printf("\nenter fruit colour  :");
  scanf("%s",&f[i].colour);
  printf(" \nenter fruit weight in kg : ");
  scanf("%d",&f[i].weight);
 }

 }
  for(int i=1;i<4;i++)
  {
    for(int j=i;j<=i;j++)
    {
        printf(" \n%d fruit details are : ",j);
    printf("\nfruit name is : %s",f[i].name);
    printf("\nfruit colour is : %s",f[i].colour);
    printf("\nfruit weight  is : %d kg",f[i].weight);
}
printf("\n");
}
}