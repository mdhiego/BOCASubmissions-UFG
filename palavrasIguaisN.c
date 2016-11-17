#include <stdio.h>
#include <string.h>

void main()
{
	int N, i, count = 0;
	char str[100][20], result[100][10];

	scanf("%d", &N);

	while (N)
	{
		strcpy(result[count], "iguais");
		for (i = 0; i < N; i++)
		{
			scanf(" %s", &str[i]);
			if (i && strcmp(str[i], str[i - 1]))
			{
				strcpy(result[count], "diferentes");
			}
		}
		count++;
		scanf("%d", &N);
	}

	for (i = 0; i < count; i ++)
		printf("%s\n", result[i]);
}
