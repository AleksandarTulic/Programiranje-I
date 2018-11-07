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

int nzd(int a, int b)
{
    if ( b == 0 ) return a;
    return nzd(b, a % b);
}

int nzs(int a, int b)
{
    return (a*b)/nzd(a,b);
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", nzs(a,b));
    return 0;
}
