#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, bActual=0, bCharged, bill;
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> bill;
        if (i != k){
            bActual += bill;
        }
    }
    bActual = bActual/2;
    cin >> bCharged;
    if (bCharged == bActual){
        cout << "Bon Appetit" << endl;
    } else{
        cout << bCharged - bActual << endl;
    }
    return 0;
}
