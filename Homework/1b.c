/*b. Take a number(n) from user & output its cube(n*n*n).*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf(" %i", &n);
    printf("The cube is: %d", n*n*n);       
    return 0;
}

/*#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%i", &n);
    int cube = (int)pow(n, 3);
    printf("The cube is: %d\n", cube);
    return 0;
}
*/