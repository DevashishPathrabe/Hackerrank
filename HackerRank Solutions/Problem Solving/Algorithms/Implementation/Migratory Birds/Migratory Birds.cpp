#include <bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin >> n;
        int arr[n];
        int occurrence;
        int count[6] = {0};
        for (int i=0; i<n; i++){
            cin >> arr[i];
            count[arr[i]]++;
        }
        int max = count[0];
        for (int i=0; i<=5; i++){
            if (count[i] > max){
                occurrence = i;
                max = count[i];
            }
        }
        cout << occurrence << endl;
        return 0;
    }
