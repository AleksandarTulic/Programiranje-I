#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b;
    scanf("%lf %lf", &a, &b);

    printf("Povrsina je: %.2lf\n", a*b);
    printf("Obim je: %.2lf\n", 2*a+2*b);
    printf("Duzina dijagonale je: %.2lf", sqrt(a*a + b*b));
    return 0;
}
