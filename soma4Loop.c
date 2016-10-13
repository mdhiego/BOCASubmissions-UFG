#include <stdio.h>

void main()
{
	int number[100], soma[100], i, j;

	for (i = 0; i < 100; i+=4)
		soma[i] = 0;
	for (i = 0; ; i+=4)
	{
		scanf("%d%d%d%d", &number[i], &number[i+1], &number[i+2], &number[i+3]);
		if (number[i] == 0 && number[i + 1] == 0 && number[i + 2] == 0 && number[i + 3] == 0)
			break;
		soma[i] += number[i] + number[i+1] + number[i+2] + number[i+3];
	}
	for (j = 0; j < i; j+=4)
		printf("%d\n", soma[j]);
}
