#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float num, deno, try;
    float def, prob;
    scanf("%f %f", &num, &deno);
    scanf("%f", &try);
    def = num / deno;
    prob = pow(1-def, (try-1))*def;
    printf("%.3f", prob);
    return 0;
}