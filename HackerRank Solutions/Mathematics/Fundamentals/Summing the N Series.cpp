#include <bits/stdc++.h>
using namespace std;
int main(){
    long int t,mod = 1e9 + 7;
    cin>>t;
    while(t--){
        long int n;
        cin >> n;
        n %= mod;
        cout << (n*n) % (mod) << endl;
    }
    return 0;
}
