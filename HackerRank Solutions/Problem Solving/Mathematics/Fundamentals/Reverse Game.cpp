#include <bits/stdc++.h>
using namespace std;

  int main() 
{
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        cout << (K >= N >> 1 ? (--N - K) << 1 : K << 1 | 1) << endl;
    }
    return 0;
  }

