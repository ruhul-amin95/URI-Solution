#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c, m;
    scanf("%d%d%d", &a, &b, &c);
    m = (a+b+abs(a-b))/2.0;
    m = (m+c+abs(m-c))/2.0;
    printf("%d eh o maior\n", m);

    return 0;
}