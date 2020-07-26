#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, positive=0, negative=0, zero=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] > 0){
            positive++;
        }
        if(arr[i] < 0){
            negative++;
        }        
        if(arr[i] == 0){
            zero++;           
        }
    }
    cout << setprecision(6) << (float)positive/n << endl;
    cout << setprecision(6) << (float)negative/n << endl;
    cout << setprecision(6) << (float)zero/n << endl;
    return 0;
}