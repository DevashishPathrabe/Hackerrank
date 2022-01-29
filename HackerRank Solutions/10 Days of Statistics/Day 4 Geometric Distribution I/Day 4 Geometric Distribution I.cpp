#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return (n * factorial(n-1));
}
double binomialDist(int x , int n , float p){
    int fact = factorial(n) / (factorial(x)*factorial(n-x)) ;
    double powers = pow(p,x) * (pow((1-p),(n-x)));
    return fact * powers;
}
double negBinomialDist(int x , int n , float p){
    int fact = factorial(n-1) / (factorial(x-1)*factorial(n-x)) ;
    double powers = pow(p,x) * (pow((1-p),(n-x)));
    return fact * powers;
}

double geoDist(int n , float p){
    return negBinomialDist(1,n,p);
}
int main() {
    cout << setprecision(3) << fixed << geoDist(5,(1.0/3.0));
    return 0;
}
