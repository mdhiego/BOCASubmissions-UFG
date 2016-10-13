#include <stdio.h>

void main()
{
    int num[100], sum, i;

    scanf("%d", &num[0]);
    for(i=1;; i++)
    {
        scanf("%d", &num[i]);
        if(num[i]==0)
            break;
    }
    for(sum=0; i>0; i--)
        sum += num[i];

    printf("%d\n", sum-num[0]);
}
