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
        int n, k;
        cin >> n >> k;
        string num;
        cin >> num;
        int largestProduct = 0;
        for(int i=0; i<=n-k; i++){
            int product = 1;
            for(int j=0; j<k; j++){
                if(num[i+j] == '0'){
                    product = 0;     
                    break;
                }
                product *= num[i+j] - '0';
            }
            if(product > largestProduct){
                largestProduct = product;
            }
        }
        cout << largestProduct << endl;
    }
    return 0;
}