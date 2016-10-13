#include <stdio.h>

void main()
{
    int numOdd[1000], numPair[1000], i, j;

    scanf("%d %d", &numOdd[0], &numPair[0]);
    for(i=0; numOdd[i] || numPair[i]; i++)
        scanf("%d %d", &numOdd[i+1], &numPair[i+1]);
    for(j=0; j<i; j++)
        printf("%d\n", numOdd[j]+numPair[j]);
}
