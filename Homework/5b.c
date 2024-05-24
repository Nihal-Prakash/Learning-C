#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "3b.c"

float root(int a, int b);

int main(void) {
    int num,index;
    printf("Enter a number: \n");
    scanf(" %i", &num);
    printf("Enter the root index: \n");
    scanf(" %i", &index);
    if (check_natural(index)) {
        float ans = root(num, root);
        printf("%6.2f", ans);
    } else {
        printf("Not a valid root index");
    }
    return 0;
}

float root(int a, int b) {
    double x = log(a)/b;
    double ans = pow(2.7182818, x);
    return ans;  
}