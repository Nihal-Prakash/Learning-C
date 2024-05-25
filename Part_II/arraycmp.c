#include <stdio.h>
#include <stdlib.h>

int main() {
    int age[] = {18,19,20};
    int *ptr = &age[0];
    int *_ptr = &age[1];

    printf("%u, %u difference = %u\n", ptr, _ptr, _ptr-ptr);
    printf("compare = %u\n", ptr == _ptr);   
    return 0;
}