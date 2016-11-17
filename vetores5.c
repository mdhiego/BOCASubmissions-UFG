#include <stdio.h>

void main()
{
	int i, j, vector[5][5], soma[5];

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &vector[i][j]);

			if (i == 0)
			{
				soma[j] = vector[i][j];
			}
			else if (i < 2)
			{
				soma[j] += vector[i][j];
			}
			else
			{
				soma[j] -= vector[i][j];
			}
		}
	}

	for (j= 0; j < 4; j++)
	{
		printf("%d ", soma[j]);
	}
	printf("%d\n", soma[4]);
}