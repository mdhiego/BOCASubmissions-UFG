#include <stdio.h>

void main()
{
    int num[3], i, smallerNum;

    for(i=0; i<3; i++)
        scanf("%d", &num[i]);
    smallerNum = num[0];
    for(i=0; i<3; i++)
       if(num[i] < smallerNum)
          smallerNum = num[i];

    printf("%d\n", smallerNum);
}
