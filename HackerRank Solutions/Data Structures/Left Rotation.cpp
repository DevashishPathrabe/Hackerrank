#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d,arr[100000];
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> arr[(n-d+i)%n];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
