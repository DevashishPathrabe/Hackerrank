#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; 
    cin >> N;
    int B[N];
    for(int i=0; i<N; i++){
        cin >> B[i];
    }
    int numberOfLoaves = 0;
    for(int i=0; i<N-1; i++){
        if(B[i]%2!=0){
            B[i]+=1;
            B[i+1]+=1; 
            numberOfLoaves+=2;
        }
    }
    for(int i=0; i<N; i++){
        if(B[i]%2!=0) {
            cout << "NO";
            return 0;
        }
    }
    cout << numberOfLoaves << endl;
    return 0;
}