#include <stdio.h>

void main()
{
	int i, j, matriz[4][4], vector[6], cont;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &matriz[i][j]);

	for (i = 0; i < 6; i++)
		scanf("%d", &vector[i]);

	for (i = cont = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j > i)
			{
				printf("%d;", vector[cont]);
				cont++;
			}
			else
			{
				printf("%d;", matriz[i][j]);
			}
		}
		printf("\n");
	}
}
