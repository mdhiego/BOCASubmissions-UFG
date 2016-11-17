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
		if (matriz1[i][0] == matriz2[i][0])
			printf("%d", matriz1[i][0]);
		else
			printf("-1");
		for (j = 1; j < 3; j++)
		{
			if (matriz1[i][j] == matriz2[i][j])
				printf(" %d", matriz1[i][j]);
			else
				printf(" -1");
		}
		printf("\n");
	}
}
