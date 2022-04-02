#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,count=0,max=0;;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (n){
        if (n%2 == 1){
            count++;
        } else{
            count = 0;
        }
        if (max < count){
            max = count;
        }
        n >>= 1;
    }
    cout << max;
    return 0;
}
