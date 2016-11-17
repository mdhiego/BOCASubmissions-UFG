#include <stdio.h>
#include <string.h>

void main()
{
	int N, i;
	char str[100][20];

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf(" %s", str[i]);
	}

	for (i = 0; i < N; i += 2)
	{
		if (strcmp(str[i], str[i + 1]) == 0)
			printf("iguais %d\n", strlen(str[i]));
		else
			printf("diferentes\n");
	}
}
