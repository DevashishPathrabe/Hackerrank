#include <bits/stdc++.h>

using namespace std;
static int T[5001][5001];
// Complete the commonChild function below.
int commonChild(string s1, string s2) {
    for(int i=0; i<=s1.size(); i++){
        for(int j=0; j<=s2.size(); j++){
            if(i == 0 || j == 0){
                T[i][j] = 0;
            }else if(s1[i-1] == s2[j-1]){
                T[i][j] = 1+T[i-1][j-1];
            }else{
                T[i][j] = max(T[i][j-1], T[i-1][j]);
            }
        }
    }
    return T[s1.size()][s2.size()];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
