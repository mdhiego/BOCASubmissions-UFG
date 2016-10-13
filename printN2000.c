#include <stdio.h>

void main()
{
    int num, i;

    scanf("%d", &num);

    for(i=0; i<2000; i++)
        printf("%d\n", num);
}
