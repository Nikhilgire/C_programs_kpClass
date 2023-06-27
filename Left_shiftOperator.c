# include<stdio.h>
int main()
{
    int x,y;
    printf("Enter inupt:\n");
    scanf("%d",&x);
    printf("Enter Shifting value :\n");
    scanf("%d",&y);

     x << y;
   
    printf("AFter left shift : %d",x << y);
}