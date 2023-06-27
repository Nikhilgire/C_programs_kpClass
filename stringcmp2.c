#include<stdio.h>
#include<string.h>
void main()
{

int result;
char str1[20];
char str2[20];

printf(" entre the first string ");
scanf("%s",str1);
printf("enter second string ");
scanf("%s",str2);

 result= strcmp(str1,str2);

printf("%d",result);

}