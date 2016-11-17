#include <stdio.h>
#include <string.h>

void main()
{
	int i, j;
	char matriz[3][3][20];

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf(" %s", &matriz[i][j]);

	for (i = 2; i >= 0; i--)
	{
		for (j = 2; j >= 0; j--)
			printf("%d;", strlen(matriz[i][j]));
		printf("\n");
	}
}