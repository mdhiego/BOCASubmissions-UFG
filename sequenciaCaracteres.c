#include <stdio.h>

void main()
{
	int i, j;
	char str1[150], str2[] = "aei", str3[] = "ouz", temp[3];

	scanf(" %s", str1);
	for (i = 0; i < 97; i++)
	{
		temp[0] = str1[i];
		temp[1] = str1[i + 1];
		temp[2] = str1[i + 2];
		for (j = 0; j < 3; j++)
		{
			if (temp[j] != str2[j])
				break;
			else if (j == 2)
				printf("sim-");
		}
		for (j = 0; j < 3; j++)
		{
			if (temp[j] != str3[j])
				break;
			else if (j == 2)
				printf("sim-");
		}
	}
	printf("\n");
}