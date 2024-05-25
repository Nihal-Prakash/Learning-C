#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n[] = {1,2,3,4,5};
    int *ptr = &n;
    printf("pointer = %u\n", ptr);
    printf("value = %i\n", *ptr);
    ptr ++;
    printf("pointer = %u\n", ptr);
    printf("value = %i\n", *ptr);

}