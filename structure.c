#include <stdio.h>
struct student
{
    int rollno;
    char name[10];
    float percent;
};

void main()
{
    struct student s;
    printf(" enter student roll no");
    scanf("%d", &s.rollno);
    printf(" enter student name");
    scanf("%s", &s.name);
    printf(" enter student percent");
    scanf("%f", &s.percent);

    printf(" student details is : ");
    printf(" \n__________________________________________");
    printf("\nstudenr roll no is : %d", s.rollno);
    printf("\nstudenr Name  is : %s", s.name);
    printf("\nstudenr Percentages is : %f", s.percent);
}
