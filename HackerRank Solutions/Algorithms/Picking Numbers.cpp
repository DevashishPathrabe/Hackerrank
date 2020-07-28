#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp, max = 0;
    cin >> n;
    int arr[100] = {0};
    for(int i=0; i<n; i++){
        cin >> temp;
        arr[temp]++;
    }
    for(int i=0; i<=n; i++){
        if(arr[i] + arr[i + 1] > max){
            max = arr[i] + arr[i + 1];
        }
    }
    cout << max << endl;
    return 0;
}
