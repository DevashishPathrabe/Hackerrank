#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr = 0;
    vector<vector<int>> v;
    for (int i=0; i<6; i++){
        vector<int> tempVec;
        for (int j=0; j<6; j++){
            int temp;
            cin >> temp;
            tempVec.push_back(temp);
        }
        v.push_back(tempVec);
    }
    int hourglassSum = -63;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            arr = v[i][j] + v[i][j+1] + v[i][j+2] + v[i+1][j+1] + v[i+2][j] + v[i+2][j+1] + v[i+2][j+2];
            if (arr > hourglassSum){
                hourglassSum = arr;
            }
        }
    }
    cout << hourglassSum << endl;
    return 0;
}
