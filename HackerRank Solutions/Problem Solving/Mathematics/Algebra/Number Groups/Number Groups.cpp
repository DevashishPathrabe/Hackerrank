#include <bits/stdc++.h>

using namespace std;

// Complete the sumOfGroup function below.
long sumOfGroup(int k) {
    // Return the sum of the elements of the k'th group.
    return (long)k*k*k;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long answer = sumOfGroup(k);

    fout << answer << "\n";

    fout.close();

    return 0;
}
