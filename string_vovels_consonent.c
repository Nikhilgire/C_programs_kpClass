#include <stdio.h>
#include <string.h>
void main()
{

    char str[50];
    int vovel = 0, number = 0, space = 0;
    int consonent = 0;
    printf(" enter a string ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' || str[i] == 'I' || str[i] == 'E' 
         || str[i] == 'O' || str[i] == 'U')
        {
            vovel++;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            consonent++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            number++;
        }
    }
    printf(" \nvovels is = %d", vovel);
    printf(" \nconsonent  is = %d", consonent);
    printf(" \n number  is = %d", number);
    printf(" \n space  is = %d", space);
}
