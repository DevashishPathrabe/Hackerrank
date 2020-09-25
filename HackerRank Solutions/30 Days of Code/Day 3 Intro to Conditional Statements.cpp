#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N%2 == 1){
        cout << "Weird" << endl;
    }
    if(N%2 == 0 && 2 <= N && N <= 5){
        cout << "Not Weird" << endl;
    }
    if(N%2 == 0 && 6 <= N && N <= 20){
        cout << "Weird" << endl;
    }
    if(N%2 == 0 && N > 20){
        cout << "Not Weird" << endl;
    }
    return 0;
}
