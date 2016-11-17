#include <stdio.h>
#include <string.h>

void main()
{
	int i;
	char str[100][20];

	for (i = 0; ; i++)
	{
		scanf(" %s", &str[i]);
		if (strcmp(str[i], "0") == 0)
			break;
	}

	int N = i;

	for (i = 0; i < N; i += 2)
	{
		if (strcmp(str[i], "carro") == 0 &&
			strcmp(str[i + 1], "carro") == 0)
			printf("sim\n");
		else
			printf("nao\n");
	}
}
