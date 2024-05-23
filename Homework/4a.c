/*a. Search on what a "nested loop" is & print this pattern using it.
*****
*****
*****
***** */
#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
       
    return 0;
}