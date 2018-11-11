#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    b+=c/60*60;
    a+=b/60;

    printf("Stepeni: %d", a);
    return 0;
}
