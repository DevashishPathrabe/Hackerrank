#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, StudentsArrivalTime;
    cin >> t;
    for (int a0=0; a0<t; a0++){
        int n, k;
        cin >> n >> k;
        vector<int>a(n);
        StudentsArrivalTime = 0;
        for (int i=0; i<n; i++){
            cin >> a[i];
            if (a[i] <= 0){
                StudentsArrivalTime++;
            }
        }
        if (StudentsArrivalTime >= k){
            cout << "NO" << endl;
        } else{
            cout << "YES" << endl;
        }
    }
    return 0;
}

