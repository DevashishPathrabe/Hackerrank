#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n,i,j,a[200],size,t,c=0;
    cin >> n;
    a[0] = 1;
    size = 1;
    for (i=2; i<=n; i++){
        for (j=0; j<size; j++){
            t = a[j]*i+c;
            c = t/10;
            a[j] = t%10;
        }
        while (c){
            a[j] = c%10;
            size++;
            j++;
            c = c/10;
        }
    }
    for (i=size-1; i>=0; i--){
        cout << a[i];
    }
    return 0; 
}
