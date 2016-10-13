#include <stdio.h>

void main()
{
    int num, i, j;

    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
            if(i>=j)
                printf("a");
        printf("\n");
    }
}
