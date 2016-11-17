#include <stdio.h>

void main()
{
    int vector[10], i;

    for(i = 0; i < 10; i++)
        scanf("%d", &vector[i]);

    for(i = 0; i < 9; i++)
        printf("%d ", vector[9 - i]);
    printf("%d\n", vector[0]);
}
