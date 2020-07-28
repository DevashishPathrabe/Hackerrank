 #include <bits/stdc++.h>
using namespace std;

int getReverseNumber(int x) {
    int temp = x, y = 0;
    while(temp != 0){
        y = (10*y) + (temp%10);
        temp = temp / 10;
    }
    return y;
}

int getBeautifulDays(int i, int j, int k) {
    int beautifulDays = 0;
    for(int x=i; x<=j; x++){
        int y = getReverseNumber(x);
        if(abs(x-y) % k == 0){
            beautifulDays++;
        }
    }
    return beautifulDays;
}

int main(){
    int i, j, k;
    cin >> i >> j >> k;
    cout << getBeautifulDays(i, j, k) << endl;
    return 0;
}

