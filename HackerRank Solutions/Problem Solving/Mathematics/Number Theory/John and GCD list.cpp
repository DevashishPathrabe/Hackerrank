#include <bits/stdc++.h>
using namespace std;

int arr[1000];
int gcd(int a, int b){
    return b ? gcd(b, a%b) : a;
}
int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        for(int i=0;i<N;i++)
            cin >> arr[i];
            cout << arr[0] << " ";
        for (int i=1;i<N;i++)
            cout << lcm(arr[i - 1], arr[i]) << " ";
            cout << arr[N - 1] << endl;    
    }
    return 0;
}
