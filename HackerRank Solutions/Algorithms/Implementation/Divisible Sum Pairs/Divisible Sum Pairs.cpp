#include <bits/stdc++.h>
using namespace std;

int main() {
    int k , n, pairs=0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i=0; i<n ; i++){
        cin >> a[i];
    }
    for (int i=0; i<n ; i++){
        for (int j=0; j<n; j++){
            if (i < j){
                if ((a[i]+a[j]) % k == 0){
                    pairs++;
                }
            }
        }
    }
    cout << pairs << endl;
    return 0;
}
