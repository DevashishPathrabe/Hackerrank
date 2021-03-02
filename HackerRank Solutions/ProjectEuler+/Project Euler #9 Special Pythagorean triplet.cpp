#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c = (n/2)-1;
        int maxValue = -1;
        while(c > 2){
            int b = c-1, a = n-c-b;
            int c_squared = c*c;
            while(b >= a){
                int product = a*b*c;
                if(product > maxValue){
                    int sum = (a*a) + (b*b);
                    if(sum == c_squared) maxValue = product;
                }
                b--;
                a = n-c-b;
            }
            c--;
        }
        cout << maxValue << endl;
    }
    return 0;
}