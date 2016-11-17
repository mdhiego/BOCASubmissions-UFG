#include <stdio.h>

void main()
{
	int i, j, matriz[4][4];

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &matriz[i][j]);
		}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j % 2 == 1)
			{
				if (matriz[i][j] > 1)
				{
					printf("_ _;");
				}
				else
				{
					printf("%d %d;", matriz[i][j - 1], matriz[i][j]);
				}
			}
		}
		printf("\n");
	}
}