#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 100;
    double mu = 500.0 , sigma = 80.0;
    double z = 1.96;
    double A = (-z * sigma/sqrt(n)) + mu;
    double B = (z * sigma/sqrt(n)) + mu;
    cout << fixed << setprecision(2) << A << endl;
    cout << fixed << setprecision(2) << B << endl;
    return 0;
}