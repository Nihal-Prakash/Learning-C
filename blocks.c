#include <stdio.h>

int main (void) {
    const int n = 5;
    for (int i = 0; i < n; i++){
            //added 2 so that it kinda looks more like a sqaure
            for ( int j = 0; j < n+2; j++) 
            {
                printf("#");
            };

      printf("\n");      
            
    };
    
}