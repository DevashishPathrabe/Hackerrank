#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, b, s, c, profit;
    cin >> t;
    for (int i=0;i<t;i++){
        cin >> b >> s >> c;
        profit = ( b + s ) - c;
        cout << profit << endl;
    }
    return 0;
}
