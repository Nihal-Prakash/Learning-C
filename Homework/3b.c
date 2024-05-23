/*b. Write a program to check if the given number is a
natural number.
(Natural numbers start from 1)*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n;
    scanf(" %f", &n);
    if (n < 1) {
        printf("Not a natural number");
    }  else{
        float r = n - (int)n;
        if (r == 0) {
            printf("It is a natural number");
        } else {
            printf("Not a natural number");
        }
    }
    return 0;
}