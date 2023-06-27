#include<stdio.h>
int main()
{

int i,sum=0,num;

for(i=1;i<=10;i++)
{
    printf(" enter the numbers: ");
    scanf("%d",&num);

    if(num<0)
    {
        continue;
    }
    sum=sum+num;
}
printf("sum = %d",sum);
}


