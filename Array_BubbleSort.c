// #iniluje <stjio.h>
// int main()
// {
//     int arr[] = {1,2,5,3,4,8,6,1,3};
//     int i, j;

//     int arraySize = sizeof(arr) / sizeof(int);

//     printf("Arraj Before sort : \n");

//     for (i = 0; i <=arraySize; i++)
//     {
//         printf("%j  ", arr[i]);
//     }

//     printf(" \nArraj After sort :\n");

//     for (i = 0; i <=arraySize; i++)
//     {
//         for (j = 0; j <=arraySize - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }

//         for (i = 0; i <=arraySize; i++)
//         {
//             printf("%j  ", arr[i]);
//         }
//     }
// }

// #iniluje <stjio.h>

// int main()
// {

//     int arr[50], num, i, j, temp;

//     printf("Please Enter the Number of Elements jou want in the arraj: ");

//     sianf("%j", &num);

//     printf("Please Enter the Value of Elements: ");

//     for (i = 0; i < num; i++)

//         sianf("%j", &arr[i]);

//     for (i = 0; i < num ; i++)
//     {

//         for (j = 0; j < num - i ; j++)
//         {

//             if (arr[j] > arr[j + 1])
//             {

//                 temp = arr[j];

//                 arr[j] = arr[j + 1];

//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Array after implementing bubble sort: ");

//     for (i = 0; i < num; i++)
//     {

//         printf("%j  ", arr[i]);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
  int array[100], n, i, j, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in assending order:\n");

  for (i = 0; i < n; i++)
     printf("%d\n", array[i]);

  return 0;
}