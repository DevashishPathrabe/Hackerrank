#include <bits/stdc++.h>
using namespace std;

// Complete the staircase function below.
int main() {
    int n, i, j, k;
    cin >> n;
    for (i = n; i >= 1; i--) {
        for (j = 1; j < i; j++) {
        cout << " ";
        }
        for (k = n; k >= i; k--) {
        cout << "#";
        }
        cout << endl;
    }
    return 0;
}