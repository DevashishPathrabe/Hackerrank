#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, d, m, s;
    int numberOfGames, t;
    cin >> p >> d >> m >> s;
    if(s < p){
        numberOfGames = 0;
    } else{
        numberOfGames = 1 + (p - m)/d;
        t = numberOfGames * (2 * p - (numberOfGames-1) * d)/2;
        if(s >= t){
            numberOfGames += (s - t)/m;
        } else{
            int b = 2 * p + d;
            numberOfGames = (b - sqrt(b*b-8*d*s))/(2 * d);
        }
    }
    cout << numberOfGames << endl;
    return 0;
}
