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
    int e;
    cin >> e;
    v.erase(v.begin()+e-1);
    int a, b;
    cin >> a >> b;
    v.erase(v.begin()+a-1, v.begin()+b-1);
    cout << v.size() << endl;
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}