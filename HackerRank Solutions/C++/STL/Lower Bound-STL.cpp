#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> arr;
    vector<int>::iterator it;
    int N, Q, Y;
    cin >> N;
    for(int i=0; i<N; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> Q;
    for(int i=0; i<Q; i++) {
        cin >> Y;
        it = lower_bound(arr.begin(), arr.end(), Y);
        if(*it == Y){
            cout << "Yes " << it - arr.begin() + 1 << endl;
        } else {
            cout << "No " << it - arr.begin() + 1 << endl;
        }
    }
    return 0;
}
