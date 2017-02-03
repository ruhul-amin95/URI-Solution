#include<stdio.h>
int main()
{
    double A, B, C, pi = 3.14159;
    scanf("%lf%lf%lf", &A, &B, &C);
    double tr, c ,t, s, r;
    tr = (1/2.0) * A * C;
    c = pi * (C*C);
    t = ((A+B)/2) * C;
    s = B*B;
    r = A * B;
    printf("TRIANGULO: %.3lf\n", tr);
    printf("CIRCULO: %.3lf\n", c);
    printf("TRAPEZIO: %.3lf\n", t);
    printf("QUADRADO: %.3lf\n", s);
    printf("RETANGULO: %.3lf\n", r);

    return 0;
}
