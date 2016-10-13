#include <stdio.h>

void main()
{
	int vector1[2][3], vector2[2][3], sum, i, j;

	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &vector1[i][j]);
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &vector2[i][j]);
	for (i = 0; i < 2; i++)
	{
		printf("%d", vector1[i][0] + vector2[i][0]);
		for (j = 1; j < 3; j++)
			printf(" %d", vector1[i][j] + vector2[i][j]);
		printf("\n");
	}
}
