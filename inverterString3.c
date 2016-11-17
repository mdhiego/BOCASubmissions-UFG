#include <stdio.h>

void main()
{
	int i;
	char string[10];

	scanf(" %s", &string);
	for (i = 7; i > 0; i -= 3)
		printf("%c%c%c", string[i], string[i + 1], string[i + 2]);
	printf("%c\n", string[0]);
}