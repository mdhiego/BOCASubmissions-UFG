#include <stdio.h>

void main()
{
	int vector1[5], vector2[5], vector3[5], i;

	for (i = 0; i < 5; i++)
		scanf("%d", &vector1[i]);
	for (i = 0; i < 5; i++)
		scanf("%d", &vector2[i]);
	for (i = 0; i < 5; i++)
		scanf("%d", &vector3[i]);
	for (i = 0; i < 5; i++)
		printf("-%d", vector1[i] + vector2[i] + vector3[i]);
	printf("\n");
}
