#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, n, m, keyboard[1000], usb[1000], amount = -1;
    cin >> b >> n >> m;
    for(int i=0; i<n; i++){
        cin >> keyboard[i];
    }
    for(int j=0; j<m; j++){
        cin >> usb[j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (keyboard[i] + usb[j] <= b){
                amount = max(amount, keyboard[i] + usb[j]);
            }
        }
    }
    cout << amount << endl;
    return 0;
}
