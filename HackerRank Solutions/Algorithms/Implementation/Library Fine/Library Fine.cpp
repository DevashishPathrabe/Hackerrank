#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the libraryFine function below.
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int fine = 0;
    if (y1 > y2){
        fine = 10000;
    }
    else if (y1 <= y2){
        if (m1 > m2 && y1 >= y2){
            fine = 500 * (m1 - m2);
        }
        else if (m1 <= m2){
            if (d1 > d2 && (m1 - m2) >= 0 && y1 >= y2){
                fine = 15*(d1 - d2);
            }
            else{
                fine = 0;
            }
        }
    }
    return fine;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string d1M1Y1_temp;
    getline(cin, d1M1Y1_temp);

    vector<string> d1M1Y1 = split_string(d1M1Y1_temp);

    int d1 = stoi(d1M1Y1[0]);

    int m1 = stoi(d1M1Y1[1]);

    int y1 = stoi(d1M1Y1[2]);

    string d2M2Y2_temp;
    getline(cin, d2M2Y2_temp);

    vector<string> d2M2Y2 = split_string(d2M2Y2_temp);

    int d2 = stoi(d2M2Y2[0]);

    int m2 = stoi(d2M2Y2[1]);

    int y2 = stoi(d2M2Y2[2]);

    int result = libraryFine(d1, m1, y1, d2, m2, y2);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
