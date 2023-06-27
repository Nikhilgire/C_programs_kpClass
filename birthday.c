#include<stdio.h>
#include<time.h>

int main()
{ 
int day, month, year;
time_t t = time(NULL);
struct tm tm = *localtime(&t);

printf("Enter your birth day (dd mm yyyy): "); 
scanf("%d %d %d", &day, &month, &year); 

// Calculating age 
int age = tm.tm_year + 1900 - year; 
if (tm.tm_mon + 1 < month || (tm.tm_mon + 1 == month && tm.tm_mday < day)) 
    age--; 

printf("Age: %d years", age); 
return 0; 
}