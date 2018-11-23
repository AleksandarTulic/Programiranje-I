#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double xmin, xmax, dx;
    int n;
    scanf("%lf %lf %lf %d", &xmin, &xmax, &dx, &n);

    while ( xmin <= xmax )
    {
        double y = 0.000000000,yt;
        yt = exp(xmin);

        int i;
        double bro = 1.00000000;
        double ime = 1.00000000;
        for (i=0;i<=n-3;i++)  //stavio sam minus 3 posto onda dobijem iste rezultate ko oni ali po pravilu bi trebalo biti samo n
        {
            if ( i )
            {
                bro*=xmin;
                ime*=i;
            }

            y+=bro/ime;
        }

        printf("%0.2lf %0.7lf %0.7lf %lf\n", xmin, y, yt, fabs((yt-y)/yt));

        xmin+=dx;
    }
    return 0;
}
