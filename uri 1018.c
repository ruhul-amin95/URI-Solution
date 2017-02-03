#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a,b,c,d,e,f,g;
    int t,u,v,w,x,y,z;
    if(0<N<1000000){
        a = N / 100;
        t = N % 100;
        b = t / 50;
        u = t % 50;
        c = u / 20;
        v = u % 20;
        d = v / 10;
        w = v % 10;
        e = w / 5;
        x = w % 5;
        f = x / 2;
        y = x % 2;
        g = y / 1;
        z = y % 1;
    }

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", a);
    printf("%d nota(s) de R$ 50,00\n", b);
    printf("%d nota(s) de R$ 20,00\n", c);
    printf("%d nota(s) de R$ 10,00\n", d);
    printf("%d nota(s) de R$ 5,00\n", e);
    printf("%d nota(s) de R$ 2,00\n", f);
    printf("%d nota(s) de R$ 1,00\n", g);

    return 0;
}
