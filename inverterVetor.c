#include <stdio.h>

void main()
{
    int vet[10], i;

    for(i=0; i<10; i++)
        scanf("%d", &vet[i]);
    for(i=0; i<9; i++)
        printf("%d ", vet[9-i]);
    printf("%d\n", vet[0]);
}
