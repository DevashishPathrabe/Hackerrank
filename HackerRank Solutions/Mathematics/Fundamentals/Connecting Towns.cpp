#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--){
        int N, TotalNoOfRoutes = 1, v;
        cin >> N;
        N-=1;
        for (int i = 0; i < N; ++i) {
            cin >> v;
            TotalNoOfRoutes = TotalNoOfRoutes * v;
            TotalNoOfRoutes = TotalNoOfRoutes % 1234567;
        }
    cout << TotalNoOfRoutes << endl;
    }
    return 0;
}
