#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    }while (n <= 0);

    int a[n];int i;
    for (i = 0;i < n;i++) scanf("%d", &a[i]);
    for (i = 0;i < n/2;i++)
    {
        a[i]^=a[n-i-1];
        a[n-1-i]^=a[i];
        a[i]^=a[n-i-1];
    }

    for (i=0;i<n;i++) printf("%d ", a[i]);
    return 0;
}
