#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=26;
    vector <int>h(t);
    for (int i=0; i<t; i++) {
        cin >> h[i];
    }
    string s;
    cin >> s;
    int height = 0;
    for(int j=0; j<s.length(); j++){
        height = max(height, h[s[j] - 'a']);
    }
    int area = height * 1 * s.length();
    cout << area << endl;
    return 0;
}
