#include <stdio.h>

void main()
{
	int i, j, matriz[4][4], sumi, sumj, maxi, maxj, programmer, program;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &matriz[i][j]);

	for (i = 0; i < 4; i++)
	{
		for (j = sumi = sumj = 0; j < 4; j++)
		{
			sumi += matriz[i][j];
			sumj += matriz[j][i];
		}
		if (i == 0)
		{
			maxi = sumi;
			maxj = sumj;
			program = programmer = i;
		}
		if (maxi < sumi)
		{
			maxi = sumi;
			program = i;
		}
		if (maxj < sumj)
		{
			maxj = sumj;
			programmer = i;
		}
	}

	printf("Programador:%d; Programa:%d;\n", programmer + 1, program + 1);
}
