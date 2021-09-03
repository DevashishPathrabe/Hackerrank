#include <bits/stdc++.h>
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
    vector<vector<int>> v;
    for (int i=0; i<n; i++){
        int k;
        cin >> k;
        vector<int> tempVec;
        for (int j=0; j<k; j++){
            int temp;
            cin >> temp;
            tempVec.push_back(temp);
        }
        v.push_back(tempVec);
    }
    for (int i=0; i<q; i++){
        int a, b;
        cin >> a >> b;
        cout << v[a][b] << endl;
    }
    return 0;
}