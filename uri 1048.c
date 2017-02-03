#include<stdio.h>
int main()
{
    double x, p, te, ts;
    char a = '%';
    scanf("%lf", &x);
    if(x>=0.0 && x<=400.0){
        p = 15.0;
        te = (p*x) / 100.0;
        ts = x + te;
        printf("Novo salario: %.2lf\n", ts);
        printf("Reajuste ganho: %.2lf\n", te);
        printf("Em percentual: %.0lf %c\n", p, a);
    }
    else if(x>400.0 && x<=800.0){
        p = 12.0;
        te = (p*x) / 100.0;
        ts = x + te;
        printf("Novo salario: %.2lf\n", ts);
        printf("Reajuste ganho: %.2lf\n", te);
        printf("Em percentual: %.0lf %c\n", p, a);
    }
    else if(x>800.0 && x<=1200.0){
        p = 10.0;
        te = (p*x) / 100.0;
        ts = x + te;
        printf("Novo salario: %.2lf\n", ts);
        printf("Reajuste ganho: %.2lf\n", te);
        printf("Em percentual: %.0lf %c\n", p, a);
    }
    else if(x>1200.0 && x<=2000.0){
        p = 7.0;
        te = (p*x) / 100.0;
        ts = x + te;
        printf("Novo salario: %.2lf\n", ts);
        printf("Reajuste ganho: %.2lf\n", te);
        printf("Em percentual: %.0lf %c\n", p, a);
    }
    else if(x>2000.0){
        p = 4.0;
        te = (p*x) / 100.0;
        ts = x + te;
        printf("Novo salario: %.2lf\n", ts);
        printf("Reajuste ganho: %.2lf\n", te);
        printf("Em percentual: %.0lf %c\n", p, a);
    }

    return 0;
}
