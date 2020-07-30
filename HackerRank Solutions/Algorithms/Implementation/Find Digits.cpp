#include <bits/stdc++.h>
using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int divisorOfn = 0;
    int t = n;
    while(n > 0){
        int digit = n % 10;
        n = n/10;
        if(digit == 0){
            continue;
        }
        else if(t % digit == 0){
            divisorOfn++;
        }
    }
    return divisorOfn;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
