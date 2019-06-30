#include "myfunc.h"
#include <stdio.h>
#include <math.h>


int korenb(int a, int b, int c, double *x1, double *x2)
{
    int diskr;
    printf("Ваше уравнение: %dx^2 + (%d)x + %d\n", a, b, c);
    diskr = b * b - 4 * a * c;
    if(a != 0)
    {
        if(diskr > 0)
        {
            *x1 = -(b * 1.0 + sqrt(diskr)) / (2 * a);
            *x2 = -(b * 1.0 - sqrt(diskr)) / (2 * a);
            printf("x1 = %f, x2 = %f", *x1, *x2);
            return 2;
        }

        if(!diskr)
        {
            *x1 = -b * 1.0 / (2 * a);
            printf("x = %f", *x1);
            return 1;
        } else {
            printf("Nan");
            return 0;
        }

    } else {
        printf("It's not squat, because a = 0\n");
        return -1;
    }

}
