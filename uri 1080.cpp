#include<cstdio>

using namespace std;

int main()
{
    unsigned int raju[100], max = 0;
    int index;

    for(int i=0; i<100; ++i) {
        scanf("%d", &raju[i]);
        if(max < raju[i]) {
            max = raju[i];
            index = i;
        }
    }

    printf("%d\n", max);
    printf("%d\n", index+1);

    return 0;
}
