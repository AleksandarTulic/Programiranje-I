#include <stdio.h>

int prost(int a)
{
    int i;
    for (i = 2;i<=a-1;i++)
        if ( a % i == 0 ) return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    while (prost(++n));

    printf("%d\n", n);
    return 0;
}
