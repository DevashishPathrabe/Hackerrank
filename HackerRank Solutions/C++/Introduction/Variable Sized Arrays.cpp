#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    vector<int> arr[n];
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        vector<int> tempVector;
        for(int j=0; j<k; j++){
            int tempVar;
            cin >> tempVar;
            tempVector.push_back(tempVar);
        }
        arr[i] = tempVector;
    }
    for(int i=0; i<q; i++){
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
    return 0;
}