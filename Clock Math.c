#include <stdio.h>

int main()
{
    int h, m;
    double angle, result;
    scanf("%d %d", &h, &m);
    result = ((30 * h) - (5.5 * m));
    angle = 360 - result;              // angle willn never greater than 180 degree
    if (result < 180)
    {
        printf("%7lf\n", result);
    }
    else
    {
        printf("%.7lf\n", angle);
    }

    
    return 0;
}
