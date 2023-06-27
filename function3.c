
//with argument without return//
#include<stdio.h>
void add(int , int );
void main()
{
// passing the variable
int a,b;
printf(" enter two nos");
scanf("%d %d",&a,&b);

add (a,b);
}
void add(int x, int y)
{
int sum;
sum=x+y;
printf(" addition is = %d",sum);
}