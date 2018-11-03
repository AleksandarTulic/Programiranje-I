#include <stdio.h>
#include <math.h>

int max(float a, float b, float c)
{
    if ( a > b && a > c ) return 1;
    else if ( b > c && c > a ) return 2;
    return 3;
}

void unos(float *p1, float *p2, float *p3)
{
    scanf("%f %f %f", &*p1, &*p2, &*p3);
}

int check(float a, float b, float c)
{
    if ( ( a + b ) < c ) return 0;
    else if ( ( a + c ) < b ) return 0;
    else if ( ( c + b ) < a ) return 0;
    return 1;
}

int jednakokraki(float a, float b, float c)
{
    if ( a == b && a != c ) return 1;
    else if ( a == c && a != b ) return 1;
    else if ( c == b && c != a ) return 1;
    return 0;
}

int jednakostranicni(float a, float b, float c)
{
    if ( a == b && a == c ) return 1;
    return 0;
}

int pravougli(float a, float b, float c)
{
    int d = max(a,b,c);
    if ( d == 1 )
        if ( sqrt((c*c)+(b*b)) == a ) return 1;
        else return 0;
    else if ( d == 2 )
        if ( sqrt((c*c)+(a*a)) == b ) return 1;
        else return 0;
    else
        if ( sqrt((a*a)+(b*b)) == c ) return 1;
        else return 0;
}

float povrsina(float a, float b, float c)
{
    float s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

float obim(float a, float b, float c)
{
    return a+b+c;
}

int main()
{
    float a,b,c;
    unos(&a, &b, &c);

    if ( !check(a,b,c) )
    {
        printf("Trougao se ne moze konstruisati.\n");
        return 0;
    }

    if ( jednakokraki(a,b,c) ) printf("Trougao je jednakokraki.\n");
    else if ( jednakostranicni(a,b,c) ) printf("Trougao je jednakostranicni.\n");
    else printf("Trougao je raznostranicni.\n");

    if ( pravougli(a,b,c) ) printf("Trougao je pravougli.\n");
    else printf("Trougao nije pravougli.\n");

    printf("Povrsina: %.2f\n", povrsina(a,b,c));
    printf("Obim: %.2f\n", obim(a,b,c));
    return 0;
}
