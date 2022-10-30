#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0 || b == 0){
        return (a + b);
    }
    else{
        return gcd(min(a, b), max(a, b)%min(a, b));
    }
}

int main()
{
    int no_of_test_cases;
    cin >> no_of_test_cases;
    while (no_of_test_cases--){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << gcd(abs(x2 - x1), abs(y2 - y1)) - 1 << "\n";
    }
    return 0;
}