#include <stdio.h>

void main()
{
    float base, heigth, area;

    scanf("%f %f", &base, &heigth);
    area = base*heigth / 2;
    printf("AREA = %.3f\n", area);
}
