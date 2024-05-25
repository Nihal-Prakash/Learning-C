#include <stdio.h>
#include <stdlib.h>

int power(int a,int b);
int main() {
    int base,index;
    printf("Enter the base: ");
    scanf(" %i", &base);
    printf("Enter the index: ");
    scanf(" %i", &index);
    printf("The answer is %i\n", power(base, index));   
    return 0;
} 

int power(int a,int b) {
    int ans = 1;
    for (int i = 0; i < b; i++){
        ans = ans * a;
    }
    return ans;
}