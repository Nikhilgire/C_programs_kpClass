// with argument with return//

#include<stdio.h>
 int add (int  , int );
 void main ()
 {
int sum,a,b;
printf(" enter two nos to addtion : ");
scanf("%d %d",&a,&b);
sum= add (a,b);
printf(" the addition is = %d",sum);

 }
 int add ( int x ,int y)
 {
    int add;
 
    add=x+y;
    return(add);
 }