#include <stdio.h>

int m[30][30];

int main()
{
    int n;
    scanf("%d", &n);

    int i,j;
    for (i=0;i<n;i++)
        for (j=0;j<=i;j++)
            if ( j == 0 ) m[i][j] = 1;
            else m[i][j] = m[i-1][j] + m[i-1][j-1];

    for (i=0;i<n;i++)
    {
        for (j=0;j<=i;j++) printf("%d",m[i][j]);
        printf("\n");
    }
    return 0;
}
