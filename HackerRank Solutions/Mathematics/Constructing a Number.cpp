#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i= 0;i<t;i++){
        long int n, sum=0;
        cin >> n;
        vector <int> a(n);
        for(int j=0;j<n;j++){
           cin >> a[j];
            sum+=a[j];
        }
        if(sum%3==0){
            cout<<"Yes"<<endl;
        } else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
