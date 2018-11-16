#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);

    float x = a, y = 1;
    float precision = 0.00001;

    while ( x - y > precision )
    {
        x = (x + y)/2;
        y = a/x;
    }

    printf("%f", x);
    return 0;
}
