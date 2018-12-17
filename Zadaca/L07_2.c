#include <stdio.h>
#include <stdlib.h>

int prost(int broj)
{
    if ( broj == 0 || broj == 1 ) return 0;
    int i=2;
    for (;i<=broj-1;i++)
        if ( broj % i == 0 ) return 0;
    return 1;
}

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    }while (n < 1 || n >= 20);

    int broj;

    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d", &broj);

            if ( prost(broj) ) printf("%d\n", broj);
        }
    }
    return 0;
}
