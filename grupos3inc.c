#include <stdio.h>

void main()
{
    int num, i;

    scanf("%d", &num);

    if(num==1 || num==2 || num==3 || num==4)
        printf("Grupo A");
    else if(num==5 || num==6 || num==7 || num==8 || num==9 || num==10)
    {
        printf("Grupo B");
        if(num==9 || num==10)
            printf(", Grupo C");
    }
    else if(num==9 || num==10 || num==11 || num==12)
        printf("Grupo C");
    printf("\n");
}
