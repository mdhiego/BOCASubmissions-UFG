#include <stdio.h>
#include <string.h>

void main()
{
	int i, j, matriz[4][4];
	char c1[100] = "", c2[100] = "", num[10];

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &matriz[i][j]);
			if (j % 2 == 1)
			{
				sprintf(num, "%d", matriz[i][j - 1]);
				if (matriz[i][j] == 1)
				{
					strcat(c1, num);
					strcat(c1, ";");
				}
				else
				{
					strcat(c2, num);
					strcat(c2, ";");
				}
			}
		}
	printf("c1:%s\nc2:%s\n", c1, c2);
}