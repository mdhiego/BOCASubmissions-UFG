#include <stdio.h>

void main()
{
    int num, i;

    scanf("%d", &num);
    for(i = 0; i < num; i++)
        printf("i");
    printf("\n");
    for(; i > 1; i--)
        printf("i\n");
}
