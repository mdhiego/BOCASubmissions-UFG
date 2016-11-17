#include <stdio.h>
#include <string.h>

void main()
{
	int i, N;
	char word[100][20];

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf(" %s", &word[i]);

	for (i = 0; i < N; i++)
	{
		if (strcmp(word[i], "ensino") == 0 || strcmp(word[i], "abstracao") == 0 ||
			strcmp(word[i], "problemas") == 0 || strcmp(word[i], "alunos") == 0 ||  
			strcmp(word[i], "escolas") == 0)
		{
			printf("educacao\n");
		}
		else if (strcmp(word[i], "main") == 0 || strcmp(word[i], "if") == 0 ||
			strcmp(word[i], "for") == 0)
		{
			printf("programacao\n");
		}
		else if (strcmp(word[i], "hospital") == 0 ||
			strcmp(word[i], "medico") == 0 || strcmp(word[i], "doenca") == 0)
		{
			printf("saude\n");
		}
	}
}
