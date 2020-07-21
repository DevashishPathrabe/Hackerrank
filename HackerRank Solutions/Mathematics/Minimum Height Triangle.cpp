#include <bits/stdc++.h>
using namespace std;

int main()
{
    int base, area, height;
    cin >> base >> area;
    height = ceil((float)(2 * area) / base);
    cout << height << endl;
    return 0;
}
