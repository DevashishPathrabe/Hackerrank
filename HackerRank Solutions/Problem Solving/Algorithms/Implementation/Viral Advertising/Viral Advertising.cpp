#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, liked, cumulativeLikes, shared;
    cin >> n;
    shared = 6;
    cumulativeLikes = 2;
    for (int i=2; i<=n; i++){
        liked = floor(shared / 2);
        shared = (liked) * 3;
        cumulativeLikes += liked;
    }
    cout << cumulativeLikes << endl;
    return 0;
}
