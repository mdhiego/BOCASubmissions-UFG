#include <stdio.h>

void main()
{
	int i, N, num, menorNum;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if (i == 0 || menorNum > num)
			menorNum = num;
	}
	printf("%d\n", menorNum);
}