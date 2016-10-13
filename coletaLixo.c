#include <stdio.h>

void main()
{
	int kilo[5], loc[5], i, j;
	for (i = 0; i < 5; i++)
		scanf("%d %d", &loc[i], &kilo[i]);
	for (j = 0; j < i; j++)
		if (kilo[j] > 2500)
			printf("%d calamidade publica\n", loc[j]);
}
