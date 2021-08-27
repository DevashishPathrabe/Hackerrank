#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<int> v;
    for (int i=0; i<N; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    reverse(v.begin(), v.end());
    for(int i=0; i<N; i++){
        cout << v[i] << " ";
    }
    return 0;
}
