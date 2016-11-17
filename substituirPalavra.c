#include <stdio.h>
#include <string.h>

void main()
{
	int i;
	char word[100][20];

	for (i = 0; ; i++)
	{
		scanf(" %s", word[i]);
		if (strcmp(word[i], "0") == 0)
			break;
	}

	int N = i;

	for (i = 0; i < N; i++)
	{
		if (strcmp(word[i], "papel") == 0)
		{
			printf("xxxx\n");
		}
		else
		{
			printf("%s\n", word[i]);
		}
	}
}