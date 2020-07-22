#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,a,b,c,d,size;
    cin >> n;
    vector<int>arr;
    for(a=0;a<n;a++){
        int v;
        cin >> v;
        arr.push_back(v);
    }
    cin >> b;
    arr.erase(arr.begin()+b-1);
    cin >> c >> d;
    arr.erase(arr.begin()+c-1,arr.begin()+d-1);
    size=arr.size();
    cout << size << endl;
    for(a=0;a<size;a++){
        cout << arr[a] << " ";
    }
    return 0;
}