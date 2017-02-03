/* Ruhul Amin Raju */

#include<stdio.h>
int main()
{
    int gst, get, gtt;
    scanf("%d%d", &gst, &get);
    gtt = get - gst;
    if(gtt<0) {
        gtt = gtt + 24;
    }
    if(gst == get) {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else {
        printf("O JOGO DUROU %d HORA(S)\n", gtt);
    }

    return 0;
}
