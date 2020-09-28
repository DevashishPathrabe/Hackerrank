#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T; char s[10000];
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf("%s",s);
        for(int j=0; j<strlen(s); j++){
            if(j % 2 == 0){
                printf("%c", s[j]);
            }
        }
        printf(" ");
        for(int j=0; j<strlen(s); j++){
            if(j % 2 != 0){
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
