#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double n, a;
    int t1, t2, t3, t4, t5, t6;
    int r1, r2, r3, r4, r5, r6;
    int c1, c2, c3, c4, c5, c6;
    int x1, x2, x3, x4, x5, b;
    scanf("%lf", &n);

    if(0 <= n <= 1000000.00)
    {
        t1 = (int)n / 100;
        r1 = (int)n % 100;
        t2 = r1 / 50;
        r2 = r1 % 50;
        t3 = r2 / 20;
        r3 = r2 % 20;
        t4 = r3 / 10;
        r4 = r3 % 10;
        t5 = r4 / 5;
        r5 = r4 % 5;
        t6 = r5 / 2;
        r6 = r5 % 2;

        a = n - (int)n;
        a = a * 100;
        b = (int)a + (r6 * 100);

        c1 = b / 100;
        x1 = b % 100;
        c2 = x1 / 50;
        x2 = x1 % 50;
        c3 = x2 / 25;
        x3 = x2 % 25;
        c4 = x3 / 10;
        x4 = x3 % 10;
        c5 = x4 / 5;
        x5 = x4 % 5;
        c6 = x5 / 1;

    }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", t1);
    printf("%d nota(s) de R$ 50.00\n", t2);
    printf("%d nota(s) de R$ 20.00\n", t3);
    printf("%d nota(s) de R$ 10.00\n", t4);
    printf("%d nota(s) de R$ 5.00\n", t5);
    printf("%d nota(s) de R$ 2.00\n", t6);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c1);
    printf("%d moeda(s) de R$ 0.50\n", c2);
    printf("%d moeda(s) de R$ 0.25\n", c3);
    printf("%d moeda(s) de R$ 0.10\n", c4);
    printf("%d moeda(s) de R$ 0.05\n", c5);
    printf("%d moeda(s) de R$ 0.01\n", c6);

    return 0;
}
