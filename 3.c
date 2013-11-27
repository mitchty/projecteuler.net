#include <stdio.h>
#include <stdlib.h>

unsigned long long largest_prime_factor(unsigned long long input);

unsigned long long largest_prime_factor(unsigned long long input) {
  unsigned long long largest = 0;
  unsigned long long d = 2;
  unsigned long long n = input;

  while (n > 1) {
    while (n % d == 0) {
      if (d > largest)
        largest = d;
      n = n / d;
    }
    d++;
    if (d * d > n && n > largest) {
      largest = n;
      break;
    }
  }

  return largest;
}

int main(void) {
  unsigned long long number = 600851475143;
  printf("%llu\n", largest_prime_factor(number));
}
