#include <stdio.h>
#include <stdlib.h>

int main(void) {
  unsigned int sum = 0;
  unsigned int limit = 1000;

  for (unsigned int i = 0; i < limit; i++) {
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  }
  printf("sum of multiples of 3 or 5 from 0 to %u is %u\n", limit, sum);
}
