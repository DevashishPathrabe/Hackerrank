#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, m, minNoOfPackages;
    cin >> n >> m;
    minNoOfPackages = ceil (n/2) * ceil (m/2); 
    cout << minNoOfPackages << endl;
    return 0;
}