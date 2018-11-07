#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define max(a,b) a > b ? a : b
#define min(a,b) a < b ? a : b
#define PI 3.14159
#define inf 2e9
#define mod 100000007
#define ull unsigned long long
#define ll long long

int suma_djelioca(int a)
{
    int i = 1;
    int br = 0;
    for (;i<=(a/2);i++)
        if ( a % i == 0 ) br+=i;
    return br;
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    int suma1 = suma_djelioca(a);
    int suma2 = suma_djelioca(b);

    if ( suma1 == b && suma2 == a ) printf("Brojevi su prijateljski\n");
    else printf("Brojevi nisu prijateljski\n");
    return 0;
}
