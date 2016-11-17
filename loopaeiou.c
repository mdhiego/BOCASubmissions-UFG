#include <stdio.h>
#include <string.h>

void main()
{
	int i;
	char word[100], consA[100] = "", consE[100] = "", consI[100] = "", consO[100] = "", consU[100] = "";

	scanf(" %s", &word);
	for (i = 0; i < strlen(word); i++)
	{
		switch (word[i])
		{
		case 'a':
			strcat(consA, "a");
			break;
		case 'e':
			strcat(consE, "e");
			break;
		case 'i':
			strcat(consI, "i");
			break;
		case 'o':
			strcat(consO, "o");
			break;
		case 'u':
			strcat(consU, "u");
			break;
		default:
			break;
		}
	}

	printf("%s\n%s\n%s\n%s\n%s\n", consA, consE, consI, consO, consU);
}