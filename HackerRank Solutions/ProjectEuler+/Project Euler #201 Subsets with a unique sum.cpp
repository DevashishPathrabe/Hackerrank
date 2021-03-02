#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, m;
    cin >> n >> m;
    vector<int> A(n), S(m, 0);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    vector<vector<bool>> found(m + 1), duplicates(m + 1);
    for(int i=0; i<=m; i++){
        size_t size = (100 * 100) + 1;
        found[i].resize(size, 0);
        duplicates[i].resize(size, 0);
    }
    found[0][0] = 1;
    for(int i=0; i<n; i++){
        for(int count=m; count>0; count--){
            for(int j=0; j<found[count-1].size(); j++){
                if(!found[count-1][j]) continue;
                int sum = j + A[i];
                if(duplicates[count-1][j] || found[count][sum]){
                    duplicates[count][sum] = found[count][sum] = 1;
                }
                else{
                    found[count][sum] = 1;
                }
            }
        }
    }
    long ans = 0;
    for(int i=0; i< found[m].size(); i++){
        if(found[m][i] && !duplicates[m][i]){
            ans += i;
        }
    }
    cout << ans;
    return 0;
}