#include <stdio.h>

void main()
{
    int i, amount[3];
    float cost[3], totalprice, total=0;

    for(i=0; i<4; i++)
    {
        scanf("%f%d", &cost[i], &amount[i]);
        if(i==3)
            break;
        total += cost[i]*amount[i];
    }
    totalprice = total+cost[3]*amount[3]*1.1;

    printf("%.2f\nNovo valor do refrigerante: %.2f\n", totalprice, cost[3]*1.1);
}
