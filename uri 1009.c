#include <stdio.h>

int main()
{
    int p1c, p2c, p1u, p2u;
    float p1, p2;
    float a, b, x;

    scanf("%d%d", &p1c, &p1u);
    scanf("%f", &p1);
    scanf("%d%d", &p2c, &p2u);
    scanf("%f", &p2);
    a = p1u*p1;
    b = p2u*p2;
    x = a + b;
    printf("VALOR A PAGAR: R$ %.2f\n", x);

    return 0;
}
