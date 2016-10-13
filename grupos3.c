#include <stdio.h>

void main()
{
    int num, toggle;

    scanf("%d", &num);
    if(num>0)
        toggle = (num-1)/4;
    if(toggle==0)
        printf("Grupo A\n");
    else if(toggle==1)
        printf("Grupo B\n");
    else if(toggle==2)
        printf("Grupo C\n");
}
