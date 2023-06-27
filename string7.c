#include <stdio.h>
#include <string.h>
void main()
{

    char str[100];
    int i, length = 0, space=0;

     printf(" enter a string : ");
     gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
          if (str[i]== ' ')
            continue;
    
             length++;
    }
        
   for (i= 0;str[i]!= '\0';i++)
   {
    if (str[i] == ' ')
    {
      space++;
   }
   }
        
    
    printf(" length is = %d", length);
     printf("\nspace   is = %d", space);
}