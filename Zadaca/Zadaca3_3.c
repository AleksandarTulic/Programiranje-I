#include <stdio.h>

struct mjesec{
    char *mje;
    int dana;
    char *isp;
};

int main()
{
    int mj, god;
    printf("Unesite mjesec i godinu: ");
    scanf("%d %d", &mj, &god);

    struct mjesec m[12];
    m[0].mje = "Januar";m[0].dana = 31;m[0].isp = "dan";
    m[1].mje = "Februar";m[1].dana = 28;m[1].isp = "dana";
    m[2].mje = "Mart";m[2].dana = 31;m[2].isp = "dan";
    m[3].mje = "April";m[3].dana = 30;m[3].isp = "dana";
    m[4].mje = "Maj";m[4].dana = 31;m[4].isp = "dan";
    m[5].mje = "Jun";m[5].dana = 30;m[5].isp = "dana";
    m[6].mje = "Juli";m[6].dana = 31;m[6].isp = "dan";
    m[7].mje = "Avgust";m[7].dana = 31;m[7].isp = "dan";
    m[8].mje = "Septembar";m[8].dana = 30;m[8].isp = "dana";
    m[9].mje = "Oktobar";m[9].dana = 31;m[9].isp = "dan";
    m[10].mje = "Novembar";m[10].dana = 30;m[10].isp = "dana";
    m[11].mje = "Decembar";m[11].dana = 31;m[11].isp = "dan";

    printf("Mjesec %s %d. godine ima ", m[mj-1].mje, god);
    if ( mj == 2 )
        if ( god % 400 == 0 ) {printf(" 29 dana.\n"); return 0;}
        else if ( ( god % 100 != 0 ) && ( god % 4 == 0 ) ) {printf("29 dana.\n"); return 0;}

    printf("%d %s.\n", m[mj-1].dana, m[mj-1].isp);
    return 0;
}
