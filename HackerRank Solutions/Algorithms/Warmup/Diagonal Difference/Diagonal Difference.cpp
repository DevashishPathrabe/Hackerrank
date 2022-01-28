#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d1=0, d2=0;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){ 
        for (int j=0; j<n; j++){
            cin >> arr[j];
        }
        d1 += arr[i];
        d2 += arr[n-i-1];
    } 
    cout << abs(d1-d2) << endl;
    return 0;
}