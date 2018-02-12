#include "stdio.h"

void main()
{
    int max(int x, int y);
    int a, b, c;
    scanf("%d,%d", &a, &b); //input both a and b
    c = max(a, b);
    printf("max=%d\n", c);
}

/*definde a function*/

int max(int x, int y)
{
    int max; //save the max value
    if (x > y)
    {
        max = x;
        printf("x 大于 y \n");
    }
    else
    {
        max = y;
        printf("y 大于 x \n");
    }

    printf("return value is %d \n\r", max);

    return max;
}