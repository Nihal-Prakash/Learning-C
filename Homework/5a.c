#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int num);

int main(void) {
  int number, digit_sum;

  printf("Enter a number: ");
  scanf("%d", &number);

  digit_sum = sum_of_digits(number);

  printf("The sum of digits of %d is %d\n", number, digit_sum);

  return 0;
}

int sum_of_digits(int num) {
  int sum = 0, remainder;

  // Handle negative numbers (technically, digits of a negative number are the same as its positive counterpart)
  if (num < 0) {
      num = -num;
  }

  // Extract digits and add them to the sum
  while (num != 0) {
    remainder = num % 10;
    sum += remainder;
    num /= 10;
  }

  return sum;
}
