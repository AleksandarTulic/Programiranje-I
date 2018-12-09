#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    }while (n <= 0);

    int a[n];int i;
    double sre = 0.0;

    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        sre+=a[i];
    }
    sre/=n;

    printf("Aritmeticka sredina je %0.2lf.\n", sre);
    int blizina = 2e9;
    int poz = -1;

    for (i=0;i<n;i++)
    {
        if ( fabs((int)sre-a[i]) < blizina )
        {
            blizina = fabs((int)sre-a[i]);
            poz = i;
        }
    }

    printf("Najblizi element je %d.\n", a[poz]);

    for (i=0;i<poz-1;i++)
    {
        int j;
        for (j=i+1;j<poz;j++)
        {
            if ( a[i] > a[j] )
            {
                a[i]^=a[j];
                a[j]^=a[i];
                a[i]^=a[j];
            }
        }
    }

    for (i=poz+1;i<n-1;i++)
    {
        int j;
        for (j=i+1;j<n;j++)
        {
            if ( a[i] < a[j] )
            {
                a[i]^=a[j];
                a[j]^=a[i];
                a[i]^=a[j];
            }
        }
    }

    printf("Modifikovan niz: ");
    for (i=0;i<n;i++) printf("%d ", a[i]);
    return 0;
}
