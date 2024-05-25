/*Check for prime*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool chkp(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);  

    if (n <= 1) {
        printf("not prime\n");
    } else if (n == 2) {
        printf("prime\n");
    } else if (n % 2 == 0) {
        printf("not prime\n");
    } else {
        if (chkp(n)) {
            printf("prime\n");
        } else {
            printf("not prime\n");
        }
    }
    return 0;
}

bool chkp(int n) {
    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {  // Check up to the square root of n
        if (n % i == 0) {
            return false;
        }
    }
    return true;  // Return true if no divisors were found
}
