#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, totalpairs = 0, arr[102], count[102] = {};
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        count[arr[i]]++;
    }
    for (int i=0; i<=100; i++){
        if (count[i] != 0){
            totalpairs += count[i]/2;
        }
    }
    cout << totalpairs << endl;
    return 0;
}
