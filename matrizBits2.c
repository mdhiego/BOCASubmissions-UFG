#include <stdio.h>

void main()
{
	int vector1[3][3], vector2[3][3], sum, i, j;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &vector1[i][j]);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &vector2[i][j]);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if ((vector1[i][j] == 0 || vector1[i][j] == 1) && (vector2[i][j] == 0 || vector2[i][j] == 1))
			{
				if (vector1[i][j] && vector2[i][j])
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
				if (vector1[i][j] >= vector2[i][j])
				{
					if (j == 0)
						printf("%d", vector1[i][j]);
					else
						printf(" %d", vector1[i][j]);
				}
				else
				{
					if (j == 0)
						printf("%d", vector2[i][j]);
					else
						printf(" %d", vector2[i][j]);
				}
			}
		}
		printf("\n");
	}
}
