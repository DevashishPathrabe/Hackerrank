#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v;
    for (int i=0; i<n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i=0; i<n; i++){
        sum += v[i];
    }
    cout << sum << endl;
}