#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int T, a, b, x, temp;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> a >> b >> x;
        temp = pow(a,b);
        int value = temp / x;
        int tempOnLeft = x * value;
        int tempOnRight = x * (value + 1);
        if ((temp - tempOnLeft) < (tempOnRight - temp)) {
            cout << tempOnLeft << endl;
        } else {
            cout << tempOnRight << endl;
        }
    }
    return 0;
}
