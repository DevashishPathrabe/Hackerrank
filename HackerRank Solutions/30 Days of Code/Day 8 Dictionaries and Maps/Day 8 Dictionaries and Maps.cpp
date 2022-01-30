#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string name;
    long phoneNumber;
    cin >> n;
    cin.ignore();
    map <string,long> phoneBook;
    for(int i=0; i<n; i++){
        cin >> name;
        cin >> phoneNumber;
        phoneBook[name] = phoneNumber;
    }
    while(cin >> name){
        if(phoneBook.find(name) != phoneBook.end()){
            cout << name << "=" << phoneBook.find(name)->second << endl;
        } else{
            cout << "Not found" << endl;
        }
    }
    return 0;
}
