#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, s, m, h;
    int a, b;
    scanf("%d", &n);
    h = n / 3600;
    a = n % 3600;
    m = a / 60;
    b = a % 60;
    s = b;

    printf("%d %d\n", a, b);

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
