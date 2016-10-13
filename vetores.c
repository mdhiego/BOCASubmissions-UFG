#include <stdio.h>

void main()
{
    int vetIni[10], i;

    for(i=0; i<10; i++)
        scanf("%d", &vetIni[i]);

    printf("pares-");
    for(i=1; i<10; i+=2)
        printf("%d-", vetIni[i]);
    printf("0-0-0-0-0\nimpares-");
    for(i=0; i<10; i+=2)
        printf("%d-", vetIni[i]);
    printf("0-0-0-0-0\n");
}
