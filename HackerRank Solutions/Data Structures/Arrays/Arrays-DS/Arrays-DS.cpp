#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> v;
    for (int i=0; i<N; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    reverse(v.begin(), v.end());
    for (int i=0; i<N; i++){
        cout << v[i] << " ";
    }
}