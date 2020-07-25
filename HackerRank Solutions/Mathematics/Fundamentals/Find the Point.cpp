#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int px, py, qx, qy;
    cin >> px >> py >> qx >> qy;
    cout << (2 * qx) - px << " " << (2 * qy) - py << endl;
  }
  return 0;
}