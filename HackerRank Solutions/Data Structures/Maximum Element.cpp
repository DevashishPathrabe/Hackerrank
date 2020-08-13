#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    stack <int> s;
    int N, x, type;
    cin >> N;
    while(N--){
        cin >> type;
        if(type == 1){
            cin >> x;
            if(s.empty()){
                s.push(x);
            } else{
                s.push(max(x,s.top()));
            }
        }
        else if(type == 2){
            if(!s.empty()){
                s.pop();
            }
        }
        else if(type == 3){
            cout << s.top() << endl;
        } 
    }
    return 0;
}
