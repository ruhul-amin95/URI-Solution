/* Ruhul Amin Raju */

#include<stdio.h>
int main()
{
    int ih, im, fh, fm, th, tm, n, x, y;
    scanf("%d%d%d%d", &ih, &im, &fh, &fm);
    th = fh - ih;
    if(th<0) {
        th = th + 24;
    }

    tm = fm - im;
    if(tm<0) {
        tm = tm + 60;
        th = th - 1;
    }

    n = tm + (th*60);
    x = n / 60;
    y = n % 60;
    if(ih == fh && im == fm) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x, y);
    }

    return 0;
}
