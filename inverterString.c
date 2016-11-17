#include <stdio.h>

void main()
{
	int i;
	char string[10];

	scanf(" %s", &string);
	for (i = 9; i >= 0; i--)
		printf("%c", string[i]);
	printf("\n");
}