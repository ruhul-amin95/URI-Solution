#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double a, b, avg;
    cin >> a >> b;

    avg = (a*3.5 + b*7.5) / (3.5+7.5);

    cout << fixed << "MEDIA = " << setprecision(5) << avg << endl;

    return 0;
}
