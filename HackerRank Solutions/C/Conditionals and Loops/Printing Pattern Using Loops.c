#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int k, n;
    scanf("%d", &n);
    k = n;
    for (int i=0; i<n+(n-1); i++){
        for (int j=0; j<n+(n-1); j++){
            if (i <= n-1){        
                if (i == 0){
                    printf("%d ", k);
                }
                if (i >= 1){
                    if (j < i){
                        printf("%d ", k-j);
                    }
                    else if (j>=i && j<n+(n-1)-i){
                        printf("%d ", k-i);
                    }
                    else{
                        printf("%d ",(j-k+1)+1);
                    }
                }
            }
            else if (i == n-1){
                if (j < n){
                    printf("%d ", k-j);
                }
                else{
                    printf("%d ", (j-k+1)+1);
                }
            }
            else if (i >= n){
                if (i == n+(n-1)){
                    printf("%d ", k);
                }
                if (j < n+(n-1)-i-1){
                    printf("%d ", k-j);
                }
                else if (j>=n+(n-1)-i-1 && j<(n+(n-1))-(n+(n-1)-i-1)){
                    printf("%d ", k-(n+(n-1)-i-1));
                }
                else{
                    printf("%d ", (j-k+1)+1);
                }
            }
        }
        printf("\n");
    }
}