#include <stdio.h>
int main()
{
    int e, w;
    float s, ts;
    scanf("%d%d", &e, &w);
    scanf("%f", &s);
    ts = s*w;
    printf("NUMBER = %d\n", e);
    printf("SALARY = U$ %.2f\n", ts);
    return 0;

}
