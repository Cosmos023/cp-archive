#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double p = 5, q = 7;
    double prob = p / q;
    cout << fixed << setprecision(6) << prob << endl;
    return 0;
}