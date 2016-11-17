#include <stdio.h>

void main()
{
    int num[100], smallerNum[33], i, j;


    for(i=0;; i+=3)
    {
        scanf("%d%d%d", &num[i], &num[i + 1], &num[i + 2]);
        if (num[i] == 0 && num[i + 1] == 0 && num[i + 2] == 0)
            break;
        smallerNum[i] = num[i];
        for(j = i; j < i + 3; j++)
            if(num[j] < smallerNum[i])
                smallerNum[i] = num[j];
    }
    for(j = 0; j < i; j += 3)
        printf("%d\n", smallerNum[j]);
}
