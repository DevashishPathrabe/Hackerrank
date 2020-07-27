#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, updown = 0, noOfValleys = 0;
    char c;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> c;
        if(c == 'U'){
            updown++;
        } else{
            updown--;
        }
        if(updown == 0 && c == 'U'){
            res++;
        }
    }
    cout << noOfValleys << endl;
    return 0;
}
