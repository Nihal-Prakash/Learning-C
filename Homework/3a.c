#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf(" %d", &n);

    for (int i = 10; i < n; i = 10 * i) {
        int r = 0;
        r = ((n % i) - r) / (i / 10);
        printf("%d", r);
    }

    return 0;
}