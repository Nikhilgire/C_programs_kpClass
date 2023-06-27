
// writing  to a file 
# include<stdio.h>
# include<stdlib.h>
int main()
{
     int num;
     FILE *fptr;
     fptr=fopen("D:\program0.txt","w");


    if(fptr == NULL)
    {
      printf("error ! opening file ");
      return 1;

    }
     printf(" Enter a no : ");
      scanf("%d",&num);
     fprintf(fptr,"%d",num);
      fclose(fptr);
      return 0;

}