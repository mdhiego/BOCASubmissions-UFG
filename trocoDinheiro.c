#include <stdio.h>

void main()
{
	float num, sum = 0;
	char simbol;

	scanf(" %c%f", &simbol, &num);
	while (num)
	{
		if (simbol == 'V')
			num *= -1;
		sum += num;
		scanf(" %c%f", &simbol, &num);
	}

	printf("Troco = %.2f\n", sum);
}
