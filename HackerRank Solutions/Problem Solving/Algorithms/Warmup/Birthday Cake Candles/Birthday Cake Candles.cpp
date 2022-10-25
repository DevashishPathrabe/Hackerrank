#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, temp=0, noOfCandles=0;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    for (int i=0; i<n; i++){
        if (arr[n-1]==arr[i]){
            noOfCandles++;
        }
    }
    cout << noOfCandles;
    return 0;
}
