#include <stdio.h>

int main()
{
    double R, pi = 3.14159, v;
    scanf("%lf", &R);
    v = (4/3.0) * pi * (R*R*R);
    printf("VOLUME = %.3lf", v);

    return 0;
}
