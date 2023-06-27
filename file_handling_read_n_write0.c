
// Reading & writing  to a file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num ;
    FILE *fptr;
    fptr = fopen("D:\program0.txt", "r+");
    if (fptr == NULL)
    {
      printf("error ! opening file ");
        return 1;
    }
    printf(" enter a no :");
    scanf("%d", &num);
    fprintf(fptr, "%d", num);
    fscanf(fptr, "%d", &num);
    printf(" value of n = %d", num);

    fclose(fptr);

    return 0;
}