#include <stdio.h>
int main ()
{

int d1, m1 ,y1 ,d2 ,m2 ,y2;
int r1,r2,r3;

printf(" enter your birthdy day");
scanf("%d",&d1);

printf(" enter your birthdy month");
scanf("%d",&m1);


printf(" enter your birthdy yera");
scanf("%d",&y1);


printf(" enter present day");
scanf("%d",&d2);

printf(" enter present month");
scanf("%d",&m2);


printf(" enter present year");
scanf("%d",&y2);


r1=d1-d2;
r2=m1-m2;
r3=y1-y2;

printf("your age is %d days %d months %d years ", &r1,&r2,&r3);



   return 0;
}
