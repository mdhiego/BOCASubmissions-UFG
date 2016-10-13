#include <stdio.h>

void main()
{
    int number, soma, i;

    for(i=soma=0; i<4; i++)
    {
        scanf("%d", &number);
        if(number<=30)
            soma += number;
    }

    printf("%d\n", soma);
}
