#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double normalCDF(double value){
        return 0.5 * erfc(-value * sqrt(0.5));
    }
    double B = 1.96*800.0 + 50000.0;
    double A = -1.96*800.0 + 50000.0;
    printf("%0.2lf\n%0.2lf", A/100.0, B/100.0);
    return 0;
}