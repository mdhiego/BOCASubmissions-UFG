#include <stdio.h>
#include <string.h>

void main()
{
	int i, N, count;
	char langProgram[20];

	scanf("%d", &N);

	for (i = count = 0; i < N; i++)
	{
		scanf(" %s", &langProgram);
		if (strcmp(langProgram, "c++") == 0 ||
			strcmp(langProgram, "java") == 0 || 
			strcmp(langProgram, "python") == 0)
		{
			count++;
		}
	}

	printf("LinguagensOOLidas:%d\n", count);
}