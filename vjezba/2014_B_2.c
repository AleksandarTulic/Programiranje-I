#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main()
{
    int n;
    scanf("%d", &n);

    int suma = 0;
    int br = 0;
    int broj = n;

    while ( broj )
    {
        broj/=10;
        br++;
    }

    int i;
    broj=n;
    while ( broj )
    {
        int f = 1;
        for (i=1;i<=br;i++) f*=(9-(broj%10));
        br--;
        broj/=10;

        suma+=f;
    }

    if ( suma == n ) printf("GOOD");
    else printf("NO");
    return 0;
}
