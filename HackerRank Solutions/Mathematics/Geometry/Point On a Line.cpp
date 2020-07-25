#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> xMap;
    map<int, int> yMap;
    while(n--) {
        int x, y;
        cin >> x >> y;
        xMap.insert(pair<int, int>(x, 0));
        yMap.insert(pair<int, int>(y, 0));
    }
    if((xMap.size() == 1) || (yMap.size() == 1)){
        cout << "YES";
    } else{
        cout << "NO";
    }
    return 0;
}
