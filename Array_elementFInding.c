# include<stdio.h>
int main()
{
  int arr[]={12,22,6,5,3,4,21,4,1,2,51,1};
  int i;
  int element = 41;
  int found = 0;
 int arrayLength = sizeof(arr)/sizeof(int);

  for(i = 0; i<arrayLength;i++)
  {
    if (arr[i] == element)
    {
       found = 1;
       break;
    }
  }

 if (found == 1)
 {
    printf("The element is present in array at %d position ",i);
 }
 else
 {
  printf("The element is not present in the array ");
 }
}
