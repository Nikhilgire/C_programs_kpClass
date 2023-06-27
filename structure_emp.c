#include<stdio.h>
struct emp
{
    int emp_id;
    char emp_name[10];
    float emp_sallary;
};
void main()
{
struct emp e1,e2;
printf("enter 1st employee id : ");
scanf("%d",&e1.emp_id);
printf("enter 1st employee name : ");
scanf("%s",&e1.emp_name);
printf("enter 1st employee sallary : ");
scanf("%f",&e1.emp_sallary);

printf("enter 2st employee id : ");
scanf("%d",&e2.emp_id);
printf("enter 2st employee name : ");
scanf("%s",&e2.emp_name);
printf("enter 2st employee sallary : ");
scanf("%f",&e2.emp_sallary);


printf("\n 1 st employee details : ");

printf("\nemployee id is : %d",e1.emp_id);
printf("\nemployee name is : %s",e1.emp_name);
printf("\nemployee sallary is : %f",e1.emp_sallary);

printf(" \n2 st employee details : ");

printf("\nemployee id is : %d",e2.emp_id);
printf("\nemployee name is : %s",e2.emp_name);
printf("\nemployee sallary is : %f",e2.emp_sallary);



}