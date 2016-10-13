#include <stdio.h>

void main()
{
    int num[100], i, j;

    for(i=0;; i++)
    {
        scanf("%d", &num[i]);
        if(num[i]==0)
            break;
    }
    for(j=0; j<i; j++)
    {
        if(num[j]==1 || num[j]==2 || num[j]==3 || num[j]==4)
            printf("Grupo A");
        else if(num[i]==5 || num[j]==6 || num[j]==7 || num[j]==8 || num[j]==9 || num[j]==10)
        {
            printf("Grupo B");
            if(num[j]==9 || num[j]==10)
                printf(", Grupo C");
        }
        else if(num[j]==9 || num[j]==10 || num[j]==11 || num[j]==12)
            printf("Grupo C");
        printf("\n");
    }
}
