// without argument with return//

#include<stdio.h>
int add();
void main()
{
int sum;
sum=add();
printf("addition is : %d",sum);
}
int add()
{
    int a,b,add;
printf(" enter two nos :");
scanf("%d %d",&a,&b);
add=a+b;
return(add);
}