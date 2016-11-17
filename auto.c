#include <stdio.h>

void main()
{
	int i, N, out;
	char code[50];

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf(" %c", &code[i]);
	for (i = out = 0; i < N; i++)
		switch (code[i])
		{
		case 'P':
		case 'C':
			out += 2;
			break;
		case 'A':
			out += 1;
			break;
		case 'D':
			out += 0;
			break;
		}
	printf("%d\n", out);
}