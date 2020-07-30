#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sticks[n], minLength = 10000;
    for(int i=0; i<n; i++){
        cin >> sticks[i];
        if(minLength > sticks[i]){
            minLength = sticks[i];
        }
    }
    bool continueLoop = true;
    int validSticks = n;
    while(continueLoop){
        cout << validSticks << endl;
        int newMinLength = 10000;
        validSticks = 0;
        for(int i=0; i<n; i++){
            sticks[i] -= minLength;
            if(sticks[i] > 0){
                if(newMinLength > sticks[i]){
                    newMinLength = sticks[i];
                }
                validSticks++;
            }
        }
        minLength = newMinLength;
        if(validSticks == 0){
            continueLoop = false;
        }
    }
    return 0;
}