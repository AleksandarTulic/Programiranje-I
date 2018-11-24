#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,n;
    do
    {
        scanf("%d %d %d", &a, &b, &n);
    }while ( a < 1 && b < 1 && n < 1 );

    int i,j;
    double suma = 0.0;
    for (i=0;i<=n;i++)
    {
        double d1 = 1.0,d2 = 1.0,d3 = 1.0;

        for (j=0;j<n-i;j++) d1*=a;
        for (j=0;j<i;j++) d2*=b;

        if ( i != 0 && i != n )
        {
            double f1 = 1.0;
            double f2 = 1.0;
            double f3 = 1.0;

            for (j=1;j<=n;j++) f1*=j;
            for (j=1;j<=i;j++) f2*=j;
            for (j=1;j<=n-i;j++) f3*=j;
            d3 = f1/(f2*f3);
        }


        suma+=d1*d2*d3;
    }

    printf("%lf", suma);
    return 0;
}
