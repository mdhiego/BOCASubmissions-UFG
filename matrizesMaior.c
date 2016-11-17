#include <stdio.h>

void main()
{
	int i, j, matriz[9][3];

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (matriz[i][j] > matriz[i + 3][j] && matriz[i][j] > matriz[i + 6][j])
			{
				printf("%d;", matriz[i][j]);
			}
			else if (matriz[i][j] < matriz[i + 3][j] && matriz[i + 3][j] > matriz[i + 6][j])
			{
				printf("%d;", matriz[i + 3][j]);
			}
			else
			{
				printf("%d;", matriz[i + 6][j]);
			}
		}
		printf("\n");
	}
}