#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int specialProblems = 0;
    int page = 1;
    int arr[n];
    for(int chapter=1; chapter<=n; ++chapter){
        cin >> arr[chapter];
        for(int index=1; index<=arr[chapter]; ++index){
            if(index == page){
                specialProblems++;
            }
            if(index == arr[chapter]|| index % k == 0){
                ++page;
            }
        }
    }
    cout << specialProblems << endl;
    return 0;
}