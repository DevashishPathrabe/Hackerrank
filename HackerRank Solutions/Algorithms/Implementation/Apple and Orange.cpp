#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, t, a, b, m, n, apple, totalapples = 0, orange, totaloranges = 0;
    cin >> s >> t >> a >> b >> m >> n;
    for(int i=0; i<m; i++){
        cin >> apple;
        if(a+apple >= s && a+apple <= t){
            totalapples++;
        }
    }
    for(int i=0; i<n; i++){
        cin >> orange;
        if(b+orange >= s && b+orange <= t){
            totaloranges++;
        }
    }
    cout << totalapples << endl << totaloranges << endl;
    return 0;
}
