#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long sum = 0;
    vector<long> v;
    cin >> n;
    for (int i=0; i<n; i++){
        long temp;
        cin >> temp;
        v.push_back(temp);
        sum += v[i];
    }
    cout << sum << endl;
}