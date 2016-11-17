#include <stdio.h>

void main()
{
    int num, toggle;

    scanf("%d", &num);
    if(num>0)
        toggle = (num - 1) / 4;
    switch (toggle)
    {
        case 0:
            printf("Grupo A\n");
            break;
        case 1:
            printf("Grupo B\n");
            break;
        case 2:
            printf("Grupo C\n");
            break;
        default:
            break;

    }
}