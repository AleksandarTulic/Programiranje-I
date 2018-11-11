#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define min(a,b) a > b ? b : a

int main()
{
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);

    b+=c/60*60;
    a+=b/60;
    printf("Ugao u radijanima je: %.4f * 3.14", a/180);
    return 0;
}
