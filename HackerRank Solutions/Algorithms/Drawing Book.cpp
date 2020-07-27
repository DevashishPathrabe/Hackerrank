#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, noOfPages;
    cin >> n >> p;
    noOfPages = (n / 2) - (p / 2);
    if(noOfPages > p / 2){
        noOfPages = p / 2;
    }
    cout << noOfPages << endl;
    return 0;
}