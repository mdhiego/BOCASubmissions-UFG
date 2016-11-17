#include <stdio.h>

void main()
{
    int num, sum;
    char simbol;

    scanf("%d", &sum);
    while(1)
    {
        scanf(" %c", &simbol);
        if(simbol == '=')
            break;
        scanf(" %d", &num);
        if(simbol == '+')
            sum += num;
        else if(simbol == '-')
            sum -= num;
    }

    printf("%d\n", sum);
}
