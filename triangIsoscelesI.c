#include <stdio.h>

void main()
{
	int i, j, num;

	scanf("%d", &num);
	num += 2;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
			if (i + j < num - 1 && i != j)
			{
				if (i < j)
					printf("0");
				else if (i < num  / 2)
					printf(" ");
			}
		if (i < num / 2)
			printf("\n");
	}
}