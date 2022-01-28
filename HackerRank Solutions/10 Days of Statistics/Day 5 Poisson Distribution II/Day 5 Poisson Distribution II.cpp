#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double A, B;
    cin >> A >> B;
    double dailyCostA = 160 + (40 * (A + (A * A)));
    double dailyCostB = 128 + (40 * (B + (B * B)));
    cout << fixed << setprecision(3) << dailyCostA << "\n" << dailyCostB << endl;
    return 0;
}