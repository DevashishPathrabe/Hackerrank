#include <bits/stdc++.h>
using namespace std;

const int CHARS = 26;
// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int count[CHARS] = {0};
    for(int i=0; a[i]!='\0'; i++){
        count[a[i]-'a']++;
    }
    for(int i=0; b[i]!='\0'; i++){
        count[b[i]-'a']--;
    }
    int result = 0;
    for(int i=0; i<26; i++){
        result+=abs(count[i]);
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    string a;
    getline(cin, a);
    string b;
    getline(cin, b);
    int res = makeAnagram(a, b);
    fout << res << "\n";
    fout.close();
    return 0;
}
