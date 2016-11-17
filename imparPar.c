#include <stdio.h>

void main()
{
    int num;

    scanf("%d", &num);
    if(num % 2 != 0)
        printf("impar\n");
    else
        printf("par\n");
}
