#include <stdio.h>

void main()
{
	int num, sum, i;

	scanf("%d", &num);
	for (i = sum = 0; num; i++)
	{
		if (i % 2 == 0)
			sum -= num;
		else
			sum += num;
		scanf("%d", &num);
	}

	printf("%d\n", sum);
}
