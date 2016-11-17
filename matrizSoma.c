#include <stdio.h>

void main()
{
	int matriz1[2][3], matriz2[2][3], sum, i, j;

	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &matriz1[i][j]);
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &matriz2[i][j]);
	for (i = 0; i < 2; i++)
	{
		printf("%d", matriz1[i][0] + matriz2[i][0]);
		for (j = 1; j < 3; j++)
			printf(" %d", matriz1[i][j] + matriz2[i][j]);
		printf("\n");
	}
}
