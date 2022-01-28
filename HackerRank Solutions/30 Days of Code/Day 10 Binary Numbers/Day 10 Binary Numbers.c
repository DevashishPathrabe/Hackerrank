#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    int n, count=0, max=0;;
    scanf("%d", &n);
    while (n){
        if (n%2 == 1){
            count++;
        } else{
            count = 0;
        }
        if (max < count){
            max = count;
        }
        n >>= 1;
    }
    printf("%d", max);
    return 0;
}
