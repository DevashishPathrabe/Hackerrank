#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for(int i=1; i<=q; i++){
        int n, minx, maxx, miny, maxy, count = 0;
        cin >> n;
        int x[n], y[n];
        for(int j=0; j<n; j++){
            cin >> x[j] >> y[j];
        }
        minx = x[0], maxx = x[0], miny = y[0], maxy = y[0];
        for(int j=1; j<n; j++){
            if(x[j] < minx){
                minx = x[j];
            }
            if(x[j] > maxx){
                maxx = x[j];
            }
            if(y[j] < miny){
                miny = y[j];
            }
            if(y[j] > maxy){
                maxy = y[j];
            }
        }
        for(int j=0; j<n; j++){
            if(x[j] > minx && x[j] < maxx && y[j] > miny && y[j] < maxy){
                count++;
            }
        }
        if(count > 0){
            cout << "NO" << endl;
        } else{
            cout << "YES" << endl;
        }
    }
}