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

int main()
{
    int a;
    scanf("%d", &a);
    int suma = 0;
    while (a!=0)
    {
        suma+=a%10;
        a/=10;
    }

    printf("%d", suma);
    return 0;
}
