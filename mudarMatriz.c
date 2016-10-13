#include <stdio.h>

void main()
{
    int num[4], i, j;

    for(i=1; i<4; i++)
        scanf("%d", &num[i]);
    for(i=1; i<10; i++)
    {
        for(j=1; j<4; j++)
        {
            if(num[j]==i)
            {
                printf("%d;", num[j]);
                break;
            }
            else if(j==3)
                printf("0;");
        }
        if(i%3==0)
            printf("\n");
    }
}
