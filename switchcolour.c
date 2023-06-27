#include <stdio.h>
void main()
{

    char ch;
    printf(" enter colour code :");
    scanf("%c", &ch);

    switch (ch)
    {

    case 'R':
    case 'r':
        printf(" this is a RED");
        break;

    case 'B':
        printf(" this is a BLACK ");
        break;

    case 'O':
        printf(" this is ORANGE ");
        break;

    case 'Y':
        printf("this is YELLOW");
        break;

    case 'P':
        printf(" this is PINK");
        break;

    default:
        printf("this is invalid ");
        break;
    }
}