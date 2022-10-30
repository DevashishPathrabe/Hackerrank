#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the summingSeries function below.
 */
int summingSeries(long n) {
    /*
     * Write your code here.
     */
    return (((n%1000000007)*(n%1000000007))%1000000007);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = summingSeries(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
