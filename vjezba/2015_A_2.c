#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main()
{
    int a,b;
    do
    {
        scanf("%d %d", &a, &b);
    }while ( a < 0 || b < 0 );

    int i;
    for (i=a;i<=b;i++)
    {
        int broj = i;

        int suma = 0;
        int flag = 1;
        while (broj)
        {
            if ( suma >= (broj%10) && broj != i ) { flag = 0; break; }
            suma+=(broj%10);
            broj/=10;
        }

        if ( flag ) printf("%d\n", i);
    }
    return 0;
}
