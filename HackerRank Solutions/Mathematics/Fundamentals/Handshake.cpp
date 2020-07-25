#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, noOfMembers;
  cin >> T;
  while (T--) {
    cin >> noOfMembers;
    cout << (noOfMembers * (noOfMembers - 1)) / 2 << endl;
  }
  return 0;
}