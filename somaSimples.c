#include <stdio.h>

void main()
{
    int number[3], soma, i;

    for(i = soma = 0; i < 3; i++)
    {
        scanf("%d", &number[i]);
        soma += number[i];
    }

    printf("%d\n", soma);
}
