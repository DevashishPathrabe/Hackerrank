#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double A, B;
    scanf("%lf%lf",&A,&B);
    double dailyCostA = 160 + (40 * (A + (A * A)));
    double dailyCostB = 128 + (40 * (B + (B * B)));
    printf("%.3lf", dailyCostA);
    printf("\n%.3lf", dailyCostB);
    return 0;
}
