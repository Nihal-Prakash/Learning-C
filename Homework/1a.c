/*a. Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    scanf(" %i", &a);
    scanf(" %i", &b);
    printf("Perimeter is %i\n", 2*(a+b));
    printf("Area is %i", a*b);   
    return 0;
}