#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year, date;
    cin >> year;
    if(year == 1918){
        date = 26;
    }
    else if (year <= 1917 && year%4 == 0){
        date = 12;
    }
    else if (year > 1918 && (year%400 == 0 || year%4 == 0 && year%100 != 0)){
        date = 12;
    }
    else{
        date = 13;
    }
    cout << date << "." << "09" << "." << year << endl;
    return 0;
}
