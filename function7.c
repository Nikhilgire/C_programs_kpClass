#include <stdio.h>
float circlediameter(float);
float circlearea(float);
void main()
{
    float r;
    printf(" enter radius of circle : ");
    scanf("%f", &r);
    printf("area of the circle is %f\n", circlearea(r));
    printf("\ndiameter of the circle is %f", circlediameter(r));
}
float circlediameter(float x)
{
    return (2 * x);
}

float circlearea(float rad)
{
    float area, pi = 3.14;
    area = pi * rad * rad;
    return (area);
}