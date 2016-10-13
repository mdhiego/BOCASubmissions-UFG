#include <stdio.h>

void main()
{
	int term1, term2, term3, term4, term5, answer[100], i, j;

	for (i = 0; ; i++)
	{
		scanf("%d", &term1);
		if (!term1)
			break;
		scanf("%d", &term2);
		if (!term2)
			break;
		scanf("%d", &term3);
		if (!term3)
			break;
		scanf("%d", &term4);
		if (!term4)
			break;
		scanf("%d", &term5);
		if (!term5)
			break;
		if (term1 == 1 && term2 == 2 && term3 == 3)
			answer[i] = 1;
		else if (term2 == 1 && term3 == 2 && term4 == 3)
			answer[i] = 1;
		else if (term3 == 1 && term4 == 2 && term5 == 3)
			answer[i] = 1;
		else
			answer[i] = 0;
	}
	for (j = 0; j < i; j++)
	{
		if (answer[j])
			printf("sim\n");
		else
			printf("nao\n");
	}
}
