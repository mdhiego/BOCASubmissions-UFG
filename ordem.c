#include <stdio.h>

void main()
{
	int n, i, j, num[100][100];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &num[i][j]);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
			switch (j)
			{
			case 0:
				if (num[i][0] <= num[i][1] && num[i][0] <= num[i][2])
					printf("%d ", num[i][0]);
				else if (num[i][1] <= num[i][0] && num[i][1] <= num[i][2])
					printf("%d ", num[i][1]);
				else
					printf("%d ", num[i][2]);
				break;
			case 1:
				if (num[i][0] >= num[i][1] && num[i][0] <= num[i][2] || num[i][0] <= num[i][1] && num[i][0] >= num[i][2])
					printf("%d ", num[i][0]);
				else if (num[i][1] >= num[i][0] && num[i][1] <= num[i][2] || num[i][1] <= num[i][0] && num[i][1] >= num[i][2])
					printf("%d ", num[i][1]);
				else
					printf("%d ", num[i][2]);
				break;
			case 2:
				if (num[i][0] >= num[i][1] && num[i][0] >= num[i][2])
					printf("%d", num[i][0]);
				else if (num[i][1] >= num[i][0] && num[i][1] >= num[i][2])
					printf("%d", num[i][1]);
				else
					printf("%d", num[i][2]);
				break;
			}
		printf("\n");
	}
}
