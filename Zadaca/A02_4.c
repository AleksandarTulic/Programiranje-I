#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    printf("Povrsina prizme je: %d\n", 2*a*b+2*a*c+2*b*c);
    printf("Zapremina prizme je: %d", a*b*c);
    return 0;
}
