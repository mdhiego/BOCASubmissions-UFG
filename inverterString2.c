#include <stdio.h>

void main()
{
	int i;
	char string[10];

	scanf(" %s", &string);
	for (i = 8; i >= 0; i-=2)
	{
		printf("%c%c", string[i], string[i + 1]);
	}
	printf("\n");
}