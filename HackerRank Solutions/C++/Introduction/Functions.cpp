#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max = a;
    if(b>max){
        max = b;
    }
    if(c>max){
        max = c;
    }
    if(d>max){
        max = d;
    }
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d\n%d\n%d\n%d\n", &a, &b, &c, &d);
    printf("%d", max_of_four(a, b, c, d));
    
    return 0;
}
