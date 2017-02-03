#include<stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double i, j;
    if(a<b+c && b<a+c && c<a+b) {
        i = a+b+c;
        printf("Perimetro = %.1lf\n", i);
    }
    else {
        j = (c * (a+b)) / 2;
        printf("Area = %.1lf\n", j);
    }
    return 0;
}
