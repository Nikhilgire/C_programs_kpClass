// without argument without return//

#include<stdio.h>
void add ();
void main()
{
 printf(" HELLOW !");
    add();
 printf(" \nC IS EASY !");
}
void add ()

{
int num1,num2,sum;
printf(" \nenter two no to add ");
scanf("%d %d",&num1,&num2);
sum=num1+num2;
printf("addition is = %d",sum);

}