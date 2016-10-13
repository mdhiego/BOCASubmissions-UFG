#include <stdio.h>

#define PI 3.1415926

void main()
{
    float R, area;

    scanf("%f", &R);
    area = PI*R*R;
    printf("AREA = %.3f\n", area);
}
