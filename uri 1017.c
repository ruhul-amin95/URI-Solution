#include<stdio.h>
int main()
{
    int cs = 12, t, as;
    float l;
    scanf("%d%d", &t, &as);
    l = (as/(float)cs) * t;
    printf("%.3f\n", l);

    return 0;
}
