#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int grade;
        cin >> grade;
        int nextMultiple=grade;
        if (grade < 38){
            cout << grade << endl;
            continue;
        }
        while (nextMultiple % 5){
            nextMultiple++;
        }
        if (nextMultiple - grade < 3){
            cout << nextMultiple << endl;
        } else{
            cout << grade << endl;
        }
    }
}