#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N, A[1000];
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=N-1; i>=0; i--){
        cout << A[i] << " ";
    }
    return 0;
}
