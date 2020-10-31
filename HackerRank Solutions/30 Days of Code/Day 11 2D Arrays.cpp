#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int sum=0, maxSum=-99999;
    for(int i=1; i<5; i++){
        for(int j=1; j<5; j++){
            sum = arr[i][j] + arr[i-1][j] + arr[i-1][j-1] + arr[i-1][j+1] + arr[i+1][j] + arr[i+1][j-1] + arr[i+1][j+1];
            if(maxSum < sum){
                maxSum = sum;
            }
        }
    }
    cout << maxSum << endl;
    return 0;
}
