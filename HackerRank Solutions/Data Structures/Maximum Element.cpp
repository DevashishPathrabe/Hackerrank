#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    stack <int> stack;
    int N, x, query;
    cin >> N;
    while(N--){
        cin >> query;
        if(query == 1){
            cin >> x;
            if(stack.empty()){
                stack.push(x);
            }
            else{
                stack.push(max(x,stack.top()));
            }
        }
        else if(query == 2){
            if (!stack.empty()){
                stack.pop();
            }
        }
        else if(query == 3){
            cout << stack.top() << endl;
        }
    }
    return 0;
}
