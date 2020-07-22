#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> Set;
    set<int>::iterator it;
    int Q, y, x;
    scanf("%d", &Q);
    for(int i=0; i<Q; i++){
        cin >> y >> x;
        if(y == 1){
            Set.insert(x);
        } else if(y == 2){
            Set.erase(x);
        } else if(y == 3){
            it = Set.find(x);
            if(it == Set.end()){
                cout << "No" << endl;
            } else{
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}



