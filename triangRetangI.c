#include <stdio.h>

void main()
{
	int i, j, num;

	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			if (i + j <= num - 1)
				printf("0");
		}
		printf("\n");
	}
}