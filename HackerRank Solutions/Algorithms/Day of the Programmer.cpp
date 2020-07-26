#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, date;
    cin >> y;
    if(y == 1918){
        date = 26;
    }
    else if (y <= 1917 && y%4 == 0){
        date = 12;
    }
    else if (y > 1918 && (y%400 == 0 || y%4 == 0 && y%100 != 0)){
        date = 12;
    }
    else{
        date = 13;
    }
    cout << date << "." << "09" << "." << y << endl;
    return 0;
}
