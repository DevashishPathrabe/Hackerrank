#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, liked, cumulativelikes, shared;
    cin >> n;
    shared = 6;
    cumulativelikes = 2;
    for(int i=2; i<=n; i++){
        liked = floor(shared/2);
        shared = (liked)*3;
        cumulativelikes += liked;
    }
    cout << cumulativelikes << endl;
    return 0;
}
