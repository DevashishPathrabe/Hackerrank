#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int q;
    scanf("%d", &q);
    for(int i=1; i<=q; i++){
        int n, minx, maxx, miny, maxy, count = 0;
        scanf("%d", &n);
        int x[n], y[n];
        for(int j=0; j<n; j++){
            scanf("%d %d", &x[j], &y[j]);
        }
        minx = x[0], maxx = x[0], miny = y[0], maxy = y[0];
        for(int j=1; j<n; j++){
            if(x[j] < minx){
                minx = x[j];
            }
            if(x[j] > maxx){
                maxx = x[j];
            }
            if(y[j] < miny){
                miny = y[j];
            }
            if(y[j] > maxy){
                maxy = y[j];
            }
        }
        for(int j=0; j<n; j++){
            if(x[j] > minx && x[j] < maxx && y[j] > miny && y[j] < maxy){
                count++;
            }
        }
        if(count > 0){
            printf("NO\n");
        } else{
            printf("YES\n");
        }
    }
}
