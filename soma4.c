#include <stdio.h>

void main()
{
    int number[4], soma, i;

    for(i=soma=0; i<4; i++)
    {
        scanf("%d", &number[i]);
        soma += number[i];
    }

    printf("%d\n", soma);
}
