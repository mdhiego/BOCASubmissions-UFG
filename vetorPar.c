#include <stdio.h>

void main()
{
	int vector1[5], vector2[5], sum, i;

	for (i = 0; i < 5; i++)
		scanf("%d", &vector1[i]);
	for (i = 0; i < 5; i++)
		scanf("%d", &vector2[i]);
	for (i = 0; i < 5; i++)
	{
		sum = vector1[i] + vector2[i];

		if (sum % 2 == 0)
			printf("-%d", sum);
		else
			printf("-%d", 0);
	}
	printf("\n");
}
