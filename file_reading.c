
// Reading to a file 
# include<stdio.h>
# include<stdlib.h>
int main()
{
     int num;
     FILE *fptr;
     fptr=fopen("D:\program0.txt","r");


    if(fptr == NULL)
    {
      printf("error ! opening file ");
      return 1;

    }
     
     fscanf(fptr,"%d",&num);
     printf("%d",num);
      fclose(fptr);
      return 0;
}