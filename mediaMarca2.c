#include <stdio.h>

void main()
{
	char mark;
	int countA, countB;
	float totalPriceA, totalPriceB, price;

	countA = countB = totalPriceA = totalPriceB = 0;

	scanf(" %c %f", &mark, &price);
	while (price >= 0)
	{
		switch (mark)
		{
		case 'A':
			totalPriceA += price;
			countA++;
			break;
		case 'B':
			totalPriceB += price;
			countB++;
			break;
		}
		scanf(" %c %f", &mark, &price);
	}
	if (totalPriceA / countA <= totalPriceB / countB)
		printf("A %.2f\n", totalPriceA / countA);
	else
		printf("B %.2f\n", totalPriceB / countB);
}