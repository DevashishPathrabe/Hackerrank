#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a;
    long long b, c, k;
    cin >> a;
    if(a <= 2){
        cout << "-1/n" << endl;
        return 0;
    }
    if(a%2 == 0){
        k = (a*1ll*a)/4;
        b = (k - 1);
        c = (k + 1);
    } else{
        k = ((a*1ll*a)-1)/2;
        b = k;
        c =(k + 1);
    }
    cout << a << " " << b << " " << c << " " << endl;
    return 0;
}
