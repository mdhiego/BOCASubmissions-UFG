#include <stdio.h>

void main()
{
	int i, N, num, numMin;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if (i == 0 || numMin > num)
			numMin = num;
	}
	printf("%d\n", numMin);
}