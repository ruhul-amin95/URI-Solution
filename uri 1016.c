#include<stdio.h>

int main()
{
    int x = 60, y = 90, t;
    float d, m, ddm;
    scanf("%d", &t);
    ddm = (y-x)/60.0;
    d = ddm * t;
    m = d * 4;
    printf("%.0f minutos\n", m);

    return 0;
}
