#include <stdio.h>

void main()
{
    int num, i;

    scanf("%d", &num);

    switch (num)
    {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Grupo A");
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("Grupo B");
            switch (num)
            {
                case 9:
                case 10:
                    printf(", Grupo C");
                default:
                    break;
            }
            break;
        case 11:
        case 12:
            printf("Grupo C");
            break;
        default:
            break;
    }
    printf("\n");
}
