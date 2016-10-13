#include <stdio.h>
#include <string.h>

void main()
{
    int num, i, j;
    char str0[20], str1[20], out[100];

    scanf("%d", &num);
    for(i=0; i<num; i++)
    {
        scanf("%s%s", str0, str1);
        if(strcmp(str0, str1))
            printf("diferentes\n");
        else
            printf("iguais\n");
    }
}
