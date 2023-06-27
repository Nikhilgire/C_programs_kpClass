// #include <stdio.h>
// int main()
// {
//   int num, reverse = 0, rem;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   while (num != 0)
//   {
//     rem = num % 10;
//     reverse = reverse * 10 + rem;
//     num = num / 10;
//   }
//   printf("Reversed Number: %d", reverse);
//   return 0;
// }

#include <stdio.h>
int main()
{
  int digit, num, sum = 0;

  printf("Enter the number to find its digit sum : ");
  scanf("%d", &num);

  int temp = num;

  while (num != 0)
  {

    digit = num % 10;

    sum = sum + digit;

    num = num / 10;
  }

  printf("The digit sum of number %d is : %d", temp, sum);
}