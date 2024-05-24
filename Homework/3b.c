/*b. Write a program to check if the given number is a
natural number.
(Natural numbers start from 1)*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check_natural(float n);
int main() {
    float n;
    scanf(" %f", &n);
    if (check_natural(n)){
        printf("It is a natural number");
    } else {
        printf("It is not a natural number");
    }
    return 0;
}

bool check_natural(float n) {
    if (n < 1) {
        return false;
    }  else{
        float r = n - (int)n;
        if (r == 0) {
            return true;
        } else {
            return false;
        }
    }
}