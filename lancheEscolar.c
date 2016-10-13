#include <stdio.h>

#define numSt 101

void main()
{
	int numStudent, amountSnack, totalSnack, i;

	for (i = totalSnack = 0; i < numSt; i++)
	{
		scanf("%d %d", &numStudent, &amountSnack);
		totalSnack += amountSnack;
	}
	printf("%d g\n", (numSt-1)*250-totalSnack);
}
