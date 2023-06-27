#include<stdio.h>
#include<stdlib.h>
int main(){

  int num;
  FILE *fptr;
  fptr=fopen("D:\program0.txt","wb");

  if(fptr == NULL)
  {
    printf(" file does not exist ! error");
    return 1;
  }
   
   printf(" enter no ");
   scanf("%d",&num);
   fwrite(&num,sizeof(num),1,fptr);
   fread(&num,sizeof(num),1,fptr);
   printf("num = %d",num);
   fclose(fptr);
   return 0;
}