#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if((v1>v2 && x1<x2) || (v1<v2 &&x1>x2)){
        for(int i=0; i<10000; i++){
            x1 += v1;
            x2 += v2;
            if(x1 == x2){
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
        return 0;
    }
    else{
        cout << "NO" << endl;
        return 0;
    }
}
