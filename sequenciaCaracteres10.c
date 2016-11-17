#include <stdio.h>


void main()
{
	int i;
	char str[100], str1[1000];

	scanf(" %s", &str1);
	for (i = 0; i < 9; i++)
	{
		scanf(" %s", str);
		strcat(str1, str);
	}
	for (i = 0; i < 998; i++)
	{
		if ((str1[i] == 'a' && str1[i + 1] == 'e' && str1[i + 2] == 'i') ||
			(str1[i] == 'o' && str1[i + 1] == 'u' && str1[i + 2] == 'z'))
			printf("sim-");
	}
	printf("\n");
}