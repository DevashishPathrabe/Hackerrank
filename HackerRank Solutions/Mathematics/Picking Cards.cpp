#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, temp;
        cin >> n;
        long int arr[n] = {0};
        for(int j = 0; j < n; j++) {
            cin >> temp;
            arr[temp]++;
        }
        long int product = 1, sum = 0;
        for(int i = 0; i < n; i++) {
            sum = (sum + arr[i]) % mod;
            product = ((product % mod) * (sum % mod)) % mod;
            sum--;
        }
        cout << product << endl;
    }
    return 0;
}