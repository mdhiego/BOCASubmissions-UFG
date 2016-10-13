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
		if (vector1[i][0] && vector2[i][0])
			printf("1");
		else
			printf("0");
		for (j = 1; j < 3; j++)
		{
			if (vector1[i][j] && vector2[i][j])
				printf(" 1");
			else
				printf(" 0");
		}
		printf("\n");
	}
}
