#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double normal_cdf(double x, double mu, double sigma){
    double z = (x - mu)/(sigma*sqrt(2));
    return  (1 + erf(z))/2;  
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double x = 9800.0;
    double mu = 205.0, sigma = 15.0;
    int n = 49;
    double mu1 = mu * n;
    double sigma1 = sigma * sqrt(n);
    cout << fixed << setprecision(4) << normal_cdf(x, mu1, sigma1);
    return 0;
}