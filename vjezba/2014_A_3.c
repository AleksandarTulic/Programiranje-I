#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main()
{
    double t = PI/2;
    double pov1 = cos(0) * t;
    double pov2 = 0.0;
    int br = 2;
    t/=2;

    while ( fabs(pov1-pov2) > 0.0001 )
    {
        pov2 = pov1;
        pov1 = 0.0;
        int i;
        for (i=1;i<=br;i++) pov1+=cos(-PI/2 + i*t) * t;

        t/=2;
        br+=2;
    }

    printf("%0.5lf", pov1);
    return 0;
}
