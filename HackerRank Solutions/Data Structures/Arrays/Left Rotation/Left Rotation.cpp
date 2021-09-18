#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, arr[1000000];
    cin >> n >> d;
    for (int i=0; i<n; i++){
        int temp;
        cin >> arr[(n-d+i) % n];
    }
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}