#include <stdio.h>

void main()
{
    int num, count5 = 0, count6 = 0;

    scanf("%d", &num);
    while(num)
    {
        if(num==5)
            count5++;
        else if(num == 6)
            count6++;
        scanf("%d", &num);
    }

    printf("5:%d - 6:%d\n", count5, count6);
}
