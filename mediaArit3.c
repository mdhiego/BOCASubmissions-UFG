#include <stdio.h>

void main()
{
    int n = 3, i;
    float num[n], sum = 0;

    for(i = 0; i<n; i++)
    {
        scanf("%f", &num[i]);
        sum += num[i];
    }
    printf("%.3f\n", sum / n);
}
