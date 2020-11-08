#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, i, maxNoOfToys=0;
    cin >> n >> k;
    int prices[n];
    for(int i=0; i<n; i++){
        cin >> prices[i];
    }
    sort(prices, prices+n);
    i=0;
    while(prices[i] < k){
        maxNoOfToys = maxNoOfToys + prices[i];
        if(maxNoOfToys > k){
            break;
        }
        i++;
    }
    cout << i << endl;
    return 0;
}
