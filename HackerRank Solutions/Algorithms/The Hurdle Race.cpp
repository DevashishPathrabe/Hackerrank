#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, arr, h = 0;
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> arr;
        if (arr > h){
            h = arr;
        }
    }
    (k >= h) ? cout << 0 << endl : cout << h - k << endl;
    return 0;
}