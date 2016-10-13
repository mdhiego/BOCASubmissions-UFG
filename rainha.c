#include <stdio.h>

void main()
{
	int N, M, i;

	scanf("%d %d", &N, &M);
	for (i = 1; i < N*N; i++)
		M *= 2;

	printf("%d\n", M);
}
