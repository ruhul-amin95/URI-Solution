#include<stdio.h>
int main()
{
    double a, b, c, d, e, m, n;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    m = ((a*2)+(b*3)+(c*4)+d)/ (2+3+4+1);
    printf("Media: %.1lf\n", m);

    if(m>7.0){
        printf("Aluno aprovado.\n");
    }
    else if(m<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(m>=5.0 && m<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n", e);
        n = (m + e) / 2;
        if(n>=5.0) {
            printf("Aluno aprovado.\n");
        }
        else if(n<=4.9) {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", n);

    }
    return 0;
}
