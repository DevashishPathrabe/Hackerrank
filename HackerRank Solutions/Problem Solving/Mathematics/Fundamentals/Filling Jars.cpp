#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, M, a, b, k, jar[N], sum=0;
    cin >> N >> M;
    while(M--){
        cin >> a >> b >> k;
        sum += ((b-a+1)*k);
    }
    long long int avg = sum / N;
    cout << avg << endl;    
    return 0;
} 
