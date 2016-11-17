#include <stdio.h>
#include <string.h>

void main()
{
	int i;
	char word[50];

	scanf("%s", &word);
	for (i = 0; i < strlen(word); i++)
		switch (word[i])
		{
		case 'a':
			printf("1");
			break;
		case 'e':
			printf("2");
			break;
		case 'i':
			printf("4");
			break;
		case 'o':
			printf("5");
			break;
		case 'u':
			printf("6");
			break;
		}
	printf("\n");
}
