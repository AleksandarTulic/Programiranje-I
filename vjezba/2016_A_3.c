#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double dx = 5, r = 5, x1 = -5, x2 = 5;
    double pov1, pov2;
    pov1 = dx * ( sqrt(5*5 - (-5) * (-5)) + sqrt(5*5 - (-5 + 5) * (-5 + 5)) ) / 2;

    while ( fabs(pov2 - pov1) > 0.001 )
    {
        pov2 = pov1;
        pov1 = 0;

        double i;
        for (i = x1;i + dx <= x2;i+=dx)
            pov1+= dx * ( sqrt(5*5 - i*i) + sqrt(5*5 - (i + dx) * (i+dx)) ) / 2;

        dx/=2;
    }

    printf("%.10lf", pov1);
    return 0;
}
