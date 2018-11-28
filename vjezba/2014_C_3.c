#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main()
{
    double dx = PI/2, pov1 = 0.0, pov2 = 0.0;
    int br = 2, kol = 2;

    do
    {
        int i;
        pov2 = pov1;pov1 = 0.0;

        for (i=0;i<br;i++) pov1+= sin(i*dx) * dx;
        dx/=2;

        br = 1;
        for (i=1;i<=kol;i++) br*=2;
        kol++;
    }while ( fabs(pov1 - pov2) > 0.0001 );

    printf("%.7lf", pov1);
    return 0;
}
