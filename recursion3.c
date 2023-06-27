#include<stdio.h>

int add(int);
void main()
{
int n;
printf("enter any no fo find sum");
scanf("%d",&n);
printf("the addition of natural no is %d = %d ",n,add(n));

}
int add(int n)
{
    if(n<=20)
    return (n + add(n-1));
    else
    return (0);
}