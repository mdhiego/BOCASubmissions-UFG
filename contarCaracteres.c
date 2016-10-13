#include <stdio.h>
#include <string.h>

void main()
{
	int len[100], i, j;
	char word[100];

	scanf(" %[^\n]s", &word);
	for (i = 0; word[0] != '0' ; i++)
	{
		len[i] = strlen(word);
		scanf(" %[^\n]s", &word);
	}
	for (j = 0; j < i ; j++)
		printf("%d\n", len[j]);
}
