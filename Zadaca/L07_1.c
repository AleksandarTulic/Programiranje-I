#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    }while (n < 1 || n >= 20);

    int s1 = 0;
    int s2 = 0;
    int broj;

    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d", &broj);
            if ( i == j ) s1+=broj;
            if ( i+j == n-1 ) s2+=broj;
        }
    }

    printf("Suma na glavnoj dijagonali je: %d\n", s1);
    printf("Suma na sporednoj dijagonali je: %d\n", s2);
    return 0;
}
