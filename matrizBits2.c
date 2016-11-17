#include <stdio.h>

void main()
{
	int matriz1[3][3], matriz2[3][3], sum, i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &matriz1[i][j]);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &matriz2[i][j]);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if ((matriz1[i][j] == 0 || matriz1[i][j] == 1) && (matriz2[i][j] == 0 || matriz2[i][j] == 1))
			{
				if (matriz1[i][j] && matriz2[i][j])
				{
					if (j == 0)
						printf("1");
					else
						printf(" 1");
				}
				else
				{
					if (j == 0)
						printf("0");
					else
						printf(" 0");
				}
			}
			else
			{
				if (matriz1[i][j] >= matriz2[i][j])
				{
					if (j == 0)
						printf("%d", matriz1[i][j]);
					else
						printf(" %d", matriz1[i][j]);
				}
				else
				{
					if (j == 0)
						printf("%d", matriz2[i][j]);
					else
						printf(" %d", matriz2[i][j]);
				}
			}
		}
		printf("\n");
	}
}
