#include <stdio.h>

void main()
{
    char caractere;
    int i;

    scanf("%c", &caractere);

    for(i = 0; i < 2000; i++)
        printf("%c\n", caractere);
}
