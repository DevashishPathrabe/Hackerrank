#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, s, chairNumber;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> n >> m >> s;
        chairNumber = (s + m - 1) % n;
        if (chairNumber == 0){
            cout << n << endl;
        } else{
            cout << chairNumber << endl;
        }
    }
    return 0;
}
