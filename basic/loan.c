#include "stdio.h"
#include "math.h"

void main()
{
    int d, p;
    float r, m;
    d = 3245000;
    p = 3245;
    r = 0.0008;
    m = (log10(p) - log10(p - d * r)) / log10(1 + r);
    printf("month = %f \n\r", m);
    printf("total = %f \n\r", m * p);
}