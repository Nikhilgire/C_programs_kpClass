# include<stdio.h>
int main()
{
   int i , n , sum = 0 ;

   printf(" Enter no of term of Odd natural nos you want print :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
      printf("%d\t",i * 2 -1 );
      sum = sum + i * 2 -1 ;
}
printf("\nSum of first %d Odd natural no is %d ",n,sum);
}