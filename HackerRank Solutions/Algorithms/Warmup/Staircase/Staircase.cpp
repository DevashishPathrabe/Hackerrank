#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=n; i>=1; i--){
        for (int j=1; j<i; j++) {
        cout << " ";
        }
        for (int k=n; k>=i; k--){
        cout << "#";
        }
        cout << endl;
    }
    return 0;
}