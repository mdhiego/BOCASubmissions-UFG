#include <stdio.h>

void main()
{
    char caractere;
    int amount, i;

    scanf("%c%d", &caractere, &amount);

    for(i = 0; i < amount; i++)
        printf("%c\n", caractere);
}
