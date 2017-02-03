#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, n, x, y;
    scanf("%lf%lf%lf", &a, &b, &c);
    n = pow(b, 2) - 4 * a * c;
    x = (-b + sqrt(n)) / (2 * a);
    y = (-b - sqrt(n)) / (2 * a);

    if(a!=0 && n>=0) {
        printf("R1 = %.5lf\n", x);
        printf("R2 = %.5lf\n", y);
    }
    else
        printf("Impossivel calcular\n");

    return 0;
}
