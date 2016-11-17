#include <stdio.h>
#include <string.h>

void main()
{
	int i, N, length[100];
	char string[20];

	scanf("%d", &N);

	int ;

	for (i = 0; i < N; i++)
	{
		scanf(" %s", &string);

		length[i] = strlen(string);
	}

	for (i = 0; i < N; i++)
	{
		printf("%d\n", length[i]);
	}
}