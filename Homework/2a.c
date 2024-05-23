#include <stdio.h>
#include <stdlib.h>

int main() {
    float a,b,c; //float to accomodate real averages
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    printf("The average is: %f", (a+b+c)/3);

    return 0;
}