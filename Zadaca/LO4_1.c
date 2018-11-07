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
    int n;
    int br = 0;
    scanf("%d", &n);
    while ( n-- )
    {
        int a;
        scanf("%d", &a);
        if ( a > 0 ) br++;
    }

    printf("%d", br);
    return 0;
}
