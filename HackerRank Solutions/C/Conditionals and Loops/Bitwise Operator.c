#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
  int i = 0, j = 0;
    int and, and_max = 0;
    int or, or_max = 0;
    int xor, xor_max = 0;
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            if (i < j){
                and = i & j;
                if (and > and_max && and < k){
                    and_max = and;
                }
                or = i | j;
                if (or > or_max && or < k){
                    or_max = or;
                }
                xor = i ^ j;
                if (xor > xor_max && xor < k){
                    xor_max = xor;
                }
            }
        }
    }
    printf("%d\n%d\n%d", and_max, or_max, xor_max);
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
