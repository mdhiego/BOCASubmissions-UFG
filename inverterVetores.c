#include <stdio.h>

void main()
{
	int vector[10][10], num, i, j;

	scanf("%d", &num);
	for (i = 0; i < num; i ++)
		for (j = 0; j < 10; j++)
			scanf("%d", &vector[i][j]);
	
	for (i = 0; i < num; i ++)
	{
		for (j = 9; j > 0; j--)
			printf("%d ", vector[i][j]);
		printf("%d\n", vector[i][0]);
	}
}
