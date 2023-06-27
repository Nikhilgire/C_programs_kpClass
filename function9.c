#include<stdio.h>
void reactangleArea( );
void main ()
{
    
reactangleArea();
reactangleArea();
reactangleArea();
reactangleArea();

}
void reactangleArea( )
{
    int length,breath;
    printf("\nEnter length and breath : \n");
    scanf("%d %d",&length,&breath);
    int area;
    area =length*breath;
    printf("Area of a rectangle is : %d\n",area);
}