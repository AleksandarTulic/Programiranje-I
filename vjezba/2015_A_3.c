#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define E 10e-5
#define cal(x) 3*x*x*x+4*x*x-7*x+5

int main()
{
    double n = 10;
    double xa = -2;
    double xb = 2;
    double dx = (xb-xa)/n;
    double xmin = 2e9;
    double ymin = 2e9;

    while (dx > E)
    {
        double i;
        dx = (xb - xa)/n;

        double a1,a2;
        for (i=xa;i<=xb;i+=dx)
        {
            double d = cal(i);
            if ( i == xa )
            {
                a1 = i;
                a2 = d;
            }
            else if ( a2 > d )
            {
                a2 = d;
                a1 = i;
            }
        }
        xmin = a1;
        ymin = a2;

        xa = xmin - dx;
        xb = xmin + dx;
    }

    printf("%lf\n", ymin);
    return 0;
}
