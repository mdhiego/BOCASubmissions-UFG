#include <stdio.h>

void main()
{
    float num, sum = 0;

    scanf("%f", &num);
    while(num)
    {
        sum += num;
        scanf("%f", &num);
    }

    printf("Valor = %.2f\n", sum);
}
