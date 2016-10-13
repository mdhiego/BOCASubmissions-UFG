#include <stdio.h>

void main()
{
	char mark;
	int count, countF = 0;

	scanf(" %c %d", &mark, &count);
	while (count)
	{
		if (mark == 'F')
			countF += count;
		scanf(" %c %d", &mark, &count);
	}
	printf("F %d\n", countF);
}