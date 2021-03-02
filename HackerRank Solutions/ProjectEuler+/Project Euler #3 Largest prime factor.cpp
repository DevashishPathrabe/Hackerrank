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

long long FindPrime(long long k) {    
    for(int i=3; i<=sqrt(k); i+=2){
        if(k % i == 0){
            k /= i;
            i = 1;
            continue;
        }
    }
    return max(k, (long long)2);
}

int main() {
    int T;
    cin >> T;
    while(T--){
        long long int N;
        cin >> N;
        while(N >= 1){
            if(N == 1){
                cout << 2 << endl;
                break;
            }
            if(N % 2 == 0){
                N /= 2;
                continue;
            }
            cout << FindPrime(N) << endl;
            break;
        }
    }
    return 0;
}