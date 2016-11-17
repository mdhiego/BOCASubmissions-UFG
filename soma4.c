#include <stdio.h>

void main()
{
    int num[4], sum, i;

    for(i = sum = 0; i < 4; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    printf("%d\n", sum);
}
