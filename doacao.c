#include <stdio.h>

void main()
{
    float num, donation = 0;

    scanf("%f", &num);
    while(num)
    {
        if(num > 5)
            donation += num / 10;
        scanf("%f", &num);
    }

    printf("Valor a ser doado = %.2f\n", donation);
}
