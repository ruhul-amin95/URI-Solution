#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, y, m, d;
    scanf("%d", &n);
    int a,b;
    y = n / 365;
    a = n % 365;
    m = a / 30;
    b = a % 30;
    d = b;

    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);

    return 0;
}
