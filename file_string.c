# include<stdio.h>
# include<stdlib.h>
int main()
{
    int arr[10];
    int i ;
   FILE *fptr[i];
   fptr[i] = fopen("D:\program0.txt","r+");

   
if (fptr  == NULL)
{
    printf(" error ! file opening ");
    return 1;
}   
   printf(" enter a array : ");
   for( i=1;i<=10;i++)
   {
   scanf("%d",&arr[i]);
   
   fprintf(fptr[i],"%d",arr[i]);
   fscanf(fptr[i], "%d",&arr[i]);
   }
   for(i=1;i<=10;i++)
   printf("array is =  %d\n",arr[i]);

   fclose(fptr[i]);
}