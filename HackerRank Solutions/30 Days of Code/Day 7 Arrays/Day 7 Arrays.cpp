#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i=0; i<N; i++){
        cin >> arr[i];
    }
    for (int i=N-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}
