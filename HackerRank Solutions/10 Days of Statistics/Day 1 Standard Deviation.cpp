#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int arr[n];
    double sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    double mean = sum / n;
    double totalSum = 0;
    for(int i=0; i<n; i++){
        totalSum += pow(arr[i] - mean, 2);
    }
    cout << fixed << setprecision(1) << sqrt(totalSum / n) << endl;
    return 0;
}