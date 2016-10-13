#include <stdio.h>

void main()
{
	int i, j, N, out;
	char num[50][4];

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		for (j = 0; j < 4; j++)
			scanf(" %c", &num[i][j]);
	for (i = 0; i < N; i++)
	{
		for (j = 0, out = 1; j < 4; j++)
			if (num[i][j] != num[i][3-j])
			{
				out = 0;
				break;
			}
		if (out)
			printf("S\n");
		else
			printf("N\n");
	}
}