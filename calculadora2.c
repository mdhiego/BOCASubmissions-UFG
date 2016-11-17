#include <stdio.h>

void main()
{
    int num[100], sum0, sum1, half, i;

    scanf("%d", &num[0]);
    for(i = 1;; i++)
    {
        scanf("%d", &num[i]);
        if(num[i] == 0)
            break;
    }
    half = i/2;

    for(i = sum0 = 0; i< half; i++)
        sum0 += num[i];
    for(sum1 = 0; i < 2 * half; i++)
        sum1 += num[i];

    printf("%d\n", sum0 - sum1);
}
