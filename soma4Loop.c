#include <stdio.h>

void main()
{
	int num[100], sum[100], i, j;

	for (i = 0; i < 100; i += 4)
		sum[i] = 0;
	for (i = 0;; i += 4)
	{
		scanf("%d%d%d%d", &num[i], &num[i + 1], &num[i + 2], &num[i + 3]);
		if (num[i] == 0 && num[i + 1] == 0 && num[i + 2] == 0 && num[i + 3] == 0)
			break;
		sum[i] += num[i] + num[i + 1] + num[i + 2] + num[i + 3];
	}
	for (j = 0; j < i; j += 4)
		printf("%d\n", sum[j]);
}
