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
        switch(query){
            case 1:
                cin >> x;
                if(stack.empty())
                    stack.push(x);
                else
                    stack.push(max(x,stack.top()));
                break;
            case 2:
                if(!stack.empty())
                    stack.pop();
                break;
            case 3:
                cout << stack.top() << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}