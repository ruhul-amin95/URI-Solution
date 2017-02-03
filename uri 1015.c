#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double p1[2], p2[2], d, a;
    for(i=0; i<2; i++)
    {
        scanf("%lf", &p1[i]);
    }
    for(i=0; i<2.0; i++)
    {
        scanf("%lf", &p2[i]);
    }
    //a = ((p2[0]-p1[0]) * (p2[0]-p1[0])) + ((p2[1]-p1[1]) * (p2[1]-p1[1]));
    a = pow((p2[0]-p1[0]), 2) + pow((p2[1]-p1[1]), 2);
    d = sqrt(a);
    printf("%.4lf", d);

    return 0;
}
