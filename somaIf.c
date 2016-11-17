#include <stdio.h>

void main()
{
    int num, sum, i;

    for(i = sum = 0; i < 4; i++)
    {
        scanf("%d", &num);
        if(num <= 30)
            sum += num;
    }

    printf("%d\n", sum);
}
