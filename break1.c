#include<stdio.h>
int main()
{

int i ,sum=0,num;

for (i=1;i<=10;i++)
{
printf(" enter the nunmbers ");
scanf("%d",&num);


if(num<0)
{
   break;
}
sum = sum + num;
}

printf("sum = %d",sum);
}