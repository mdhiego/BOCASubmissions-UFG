#include <stdio.h>

void main()
{
	int i, j, matriz[5][5];

	for (i = 1; i < 5; i++)
		for (j = 1; j < 5; j++)
			scanf("%d", &matriz[i][j]);

	for (i--; i > 0; i--)
		for (j = 1; j < 5; j++)
			switch (matriz[i][j])
			{
			case 1:
				printf("Problema:%d-ENTRADA;\n", i);
				break;
			case 2:
				printf("Problema:%d-SAIDA;\n", i);
				break;
			case 3:
				printf("Problema:%d-SELECAO;\n", i);
				break;
			case 4:
				printf("Problema:%d-REPETICAO;\n", i);
				break;
			default:
				break;
			}
}