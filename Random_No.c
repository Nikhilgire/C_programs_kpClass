#include<stdio.h>
#include<stdlib.h>
 
#include<time.h>
 
int main ()
 
{
 
   printf ("1st random number :  %d\n", rand() % 100);
   printf ("2nd random number : %d\n", rand() % 100);
   printf ("3rd  random number: %d\n", rand() % 10);
 
   return 0;
 
}