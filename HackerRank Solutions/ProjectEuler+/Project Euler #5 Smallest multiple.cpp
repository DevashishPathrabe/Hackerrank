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

bool isPrime(int N) {
    for(int i=2; i<=sqrt(N); ){
        if(N % i == 0){
            return false;
        }
        i += (i==2) ? 1 : 2;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while(T--){
        long long int N, ans=1;
        cin >> N;
        for(long long int i=2; i<=N; ){
            if(isPrime(i)){
                long long int prod = pow(i, 1);
                for(long long int j=2; pow(i, j) <= N; j++){
                    prod = pow(i, j);
                }
                ans *= prod;
            }
            i += (i==2) ? 1 : 2;
        }
        cout << ans << endl;
    }
    return 0;
}