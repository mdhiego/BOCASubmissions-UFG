#include <stdio.h>

void main()
{
	int i, j;
	char word1[100], word2, result[50];

	scanf(" %s%s", &word1, &word2);
	for (i = 0; word1 != '0' && word2 != '0'; i++)
	{
		if (word1 == "carro" && word2 == "carro")
			result[i] = "sim";
		else
			result[i] = "nao";
		scanf(" %s%s", &word1, &word2);
	}
	for (j = 0; j < i ; j++)
		printf("%s\n", result[j]);
}
