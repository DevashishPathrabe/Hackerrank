#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    stack <int> stack;
    int N, x, t;
    cin >> N;
    while(N--){
        cin >> t;
        if(t == 1){
            cin >> x;
            if(stack.empty()){
                stack.push(x);
            }
            else{
                stack.push(max(x,stack.top()));
            }
        }
        else if(t == 2){
            if (!stack.empty()){
                stack.pop();
            }
        }
        else if(t == 3){
            cout << stack.top() << endl;
        }
    }
    return 0;
}
