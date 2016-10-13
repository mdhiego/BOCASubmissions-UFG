#include <stdio.h>

void main()
{
    float cost[4], total=0;
    int i, amount[4];

    for(i=0; i<4; i++)
    {
        scanf("%f %d", &cost[i], &amount[i]);
        total += cost[i]*amount[i];
    }
    printf("%.2f\n", total);
}
