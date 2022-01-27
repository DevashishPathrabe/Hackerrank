#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int height = 1;
        for (int i=1; i<=n; i++){
            if (i%2 == 0){
                height++;
            }
            else{
                height *= 2;
            }
        }
        cout << height << endl;
    }
    return 0;
}
