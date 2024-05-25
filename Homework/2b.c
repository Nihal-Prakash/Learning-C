/*b. Write a program to print the smallest number of two.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    scanf(" %i", &a);   
    scanf(" %i", &b);
    int s = (a > b) ? b : (b > a) ? a : (
        printf("Both are equal"),
        exit(0),
        0);
    printf("the smaller number is %i", s);
    return 0;

}