/* Ruhul Amin Raju */

#include<stdio.h>
int main()
{
    double a, b, c , x, y, z, temp;
    scanf("%lf%lf%lf", &a, &b, &c);
    x=a, y=b, z=c;

    if(x>y) {
        temp = x;
        x = y;
        y = temp;
    }
    if(y>z){
        temp = y;
        y = z;
        z = temp;
    }
    if(x>y){
        temp = x;
        x = y;
        y = temp;
    }

    a = z, b = y, c = x;

    if(0<a && 0<b && 0<c){
        if(a>=b+c)
            printf("NAO FORMA TRIANGULO\n");
        else if(a*a == b*b+c*c)
            printf("TRIANGULO RETANGULO\n");
        else if(a*a > b*b+c*c)
            printf("TRIANGULO OBTUSANGULO\n");
        else if(a*a < b*b+c*c)
            printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c && c==a){
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b)) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}

