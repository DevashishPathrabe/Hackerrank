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
    vector<int>::iterator it;
    for (int i=0; i<N; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int q;
    cin >> q;
    for (int i=0; i<q; i++) {
        int Y;
        cin >> Y;
        it = lower_bound(v.begin(), v.end(), Y);
        if(*it == Y){
            cout << "Yes " << it-v.begin()+1 << endl;
        } else {
            cout << "No " << it-v.begin()+1 << endl;
        }
    }
    return 0;
}
