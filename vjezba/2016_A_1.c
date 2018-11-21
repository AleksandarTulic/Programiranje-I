#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b;
    do
    {
        scanf("%d %d", &a,&b);
    }while (a < 0 || b < 0);

    double i = a;
    for (;i<=b;i++)
    {
        double suma = 0.0;

        int j;
        for (j=1;j<=i;j++)
        {
            double s1=1,s2=0.0;
            double k;
            for (k=1;k<=j;k++) s2+=k/(k+1);
            for (k=1;k<=j;k++) s1*=j;

            suma+=(s1/s2);
        }

        printf("%lf\n", suma);
    }
    return 0;
}
