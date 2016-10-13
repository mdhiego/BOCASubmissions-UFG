#include <stdio.h>

void main()
{
    int confirm, numMonths;
    float salary;

    scanf("%d%d%fS", &confirm, &numMonths, &salary);

    if(confirm==2 || numMonths <=3)
        printf("Valor = %.2f\n", 0.00);
    else
        printf("Valor = %.2f\n", salary*1.30);
}
