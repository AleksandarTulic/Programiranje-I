#include <stdio.h>
#include <stdlib.h>

struct RGB{
    int r;
    int g;
    int b;
};

char oznaka(int broj)
{
    if ( broj >= 0 && broj <= 9 ) return '0' + broj;
    else if ( broj == 10 ) return 'A';
    else if ( broj == 11 ) return 'B';
    else if ( broj == 12 ) return 'C';
    else if ( broj == 13 ) return 'D';
    else if ( broj == 14 ) return 'E';
    else return 'F';
}

void convert(int broj)
{
    int br = 0;
    int d = broj;
    while (broj)
    {
        broj/=16;
        br++;
    }

    if ( br == 1 ) printf("0%c", oznaka(d));
    else printf("%c%c", oznaka(d/16), oznaka(d));
    return;
}

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    }while (n < 1 || n >= 10);

    struct RGB m[n][n];
    int i,j;
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            scanf("%d %d %d", &m[i][j].r, &m[i][j].g, &m[i][j].b);

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("#");
            convert(m[i][j].r);
            convert(m[i][j].g);
            convert(m[i][j].b);
            printf("\n");
        }
    }
    return 0;
}
