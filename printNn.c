#include <stdio.h>

void main()
{
    int num, amount, i;

    scanf("%d%d", &num, &amount);

    for(i=0; i<amount; i++)
        printf("%d\n", num);
}
