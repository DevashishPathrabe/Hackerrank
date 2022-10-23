#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q, a, m;
    vector <int> arr;
    cin >> n >> k >> q;
    for (int i=0; i<n; i++){
        cin >> a;
        arr.push_back(a);
    }
    k %= n;
    for (int i=0; i<q; i++){
        cin >> m;
        if (m-k >= 0){
            cout << arr[m-k] << endl;
        } else{
            cout << arr[m-k+n] << endl;
        }
    }
    return 0;
}