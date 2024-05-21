#include <stdio.h>

int main (void) {
    const int n = 5;
    for (int i = 0; i < n; i++){
            for ( int j = 0; j < n+2; j++) //added 2 so that it kinda looks more like a sqaure
            {
                printf("#");
            };

      printf("\n");      
            
    };
    
}