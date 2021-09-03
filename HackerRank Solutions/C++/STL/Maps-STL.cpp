#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    int type, y;
    string x;
    map<string, int> m;
    map<string, int>::iterator it;
    for (int i=0; i<q; i++) {
        cin >> type >> x;
        if (type == 1) {
            cin >> y;
            it = m.find(x);
            if (it == m.end()) {
                m[x] = y;
            } else {
                m[x] += y;
            }
        }
        else if (type == 2) {
            m[x] = 0;
        }
        else if (type == 3) {
            cout << m[x] << endl;
        }
    }
    return 0;
}