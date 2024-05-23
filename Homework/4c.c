/*Write a program to print prime numbers in a range.*/
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false;  // 0 and 1 are not prime numbers
    if (num <= 3) return true;   // 2 and 3 are prime numbers
    if (num % 2 == 0 || num % 3 == 0) return false;  // Eliminate multiples of 2 and 3

    // Check for factors from 5 up to sqrt(num)
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; ++i) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
