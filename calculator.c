// with argument with return//

#include<stdio.h>
 int add (int  , int );
 void main ()
 {
int num1,num2;

printf(" the addition is = %d",add (num1,num2));

 }
 int add ( int x ,int y)
 {
    int sum;
    printf(" enter two nos to addtion : ");
scanf("%d %d",&x,&y);
 
    sum=x+y;
    return(sum);
 }