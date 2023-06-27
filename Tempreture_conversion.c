# include<stdio.h>
int main()
{
    float temp ;
    
    printf("Enter tempreture in degree celcius : ");
    scanf("%f",&temp);

    printf("tempreture in degree ceclcius : %f",temp);

    temp = (temp * 9/5 ) + 32;
    //  temp =( (temp - 32 )*5/9) ; // for fahrenheit to celcius

    

    printf("\ntempreture in degree Fahrenheit  : %f",temp);

    return 0;
}