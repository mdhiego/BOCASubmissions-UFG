#include <stdio.h>

void main()
{
    int numBooks;
    float booksValue;

    scanf("%d %f", &numBooks, &booksValue);

    if(numBooks>3)
        printf("Valor = %.2f\n", booksValue);
    else
        printf("Valor = %.2f\n", 2.50);
}
