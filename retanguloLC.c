#include <stdio.h>

int main()
{
	int i, j, numi[2], numj[2], temp[2];
	char mark;

	scanf(" %c %d %d", &mark, &numi[0], &numi[1]);
	scanf(" %c %d %d", &mark, &numj[0], &numj[1]);

	if (mark == 'L')
	{
		temp[0] = numi[0];
		temp[1] = numi[1];
		numi[0] = numj[0];
		numi[1] = numj[1];
		numj[0] = temp[0];
		numj[1] = temp[1];
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if(i >= numi[0]-1 && i <= numi[1]-1 && j >= numj[0]-1 && j <= numj[1]-1)
				printf("0");
			else
				printf(" ");
		}
		printf("\n");
	}
}