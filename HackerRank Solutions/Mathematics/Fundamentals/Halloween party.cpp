#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int T, K, Chocolate;
    cin >> T;
    for(int i=0; i<T;i++){
        cin >> K;
        cout << (K-K/2)*(K/2) << endl;
    }
    return 0;
}

