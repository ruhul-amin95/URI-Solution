#include<stdio.h>
int main()
{
    int d;
    float f, r;
    scanf("%d%f", &d, &f);
    r = d/f;
    printf("%.3f km/l\n", r);

    return 0;
}
