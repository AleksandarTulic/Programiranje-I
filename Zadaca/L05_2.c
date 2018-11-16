#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (--n)
    {
        int suma = 0;
        int d = n;
        while ( d )
        {
            int f = 1;
            int broj = d % 10;
            d/=10;
            while ( broj ) f*=broj--;
            suma+=f;
        }

        if ( suma == n )
        {
            printf("%d\n", n);
            return 0;
        }
    }

    printf("Nije pronadjen takav broj.");
    return 0;
}
