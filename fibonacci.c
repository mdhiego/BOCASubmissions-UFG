#include <stdio.h>

int main()
{
	int first, second, next, i;

	scanf("%d %d", &first, &second);
	printf("%d\n%d\n", first, second);
	for (i = 0; i < 8; i++)
	{
		next = first + second;
		first = second;
		second = next;
		printf("%d\n", next);
	}
}