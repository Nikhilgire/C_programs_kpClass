#include<stdio.h>
int reactanglearea(int ,int );
void main()
{

    int  a,v ;
    printf(" area is %d",reactanglearea(a,v));
}
int reactanglearea(int l , int b)
{
    printf(" \nenter length and breath");
    scanf("%d %d",&l,&b);
    return(l*b);
}