#include <stdio.h>

void main()
{
	int n, i, number[100], raz;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &number[i]);
	raz = number[1] - number[0];
	for (i = 2; i < n; i++)
	{
		if (number[i] - number[i - 1] != raz)
		{
			printf("N\n");
			break;
		}
		else if(i == n - 1)
			printf("%d\n", raz);
	}
}
