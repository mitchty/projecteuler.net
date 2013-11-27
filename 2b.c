#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int fib(unsigned int to);

unsigned int fib(unsigned int to) {
  if (to < 2) {
    return to;
  } else {
    if (to > 1)
      return fib(to - 1) + fib(to - 2);
  }
  return 0;
}

int main(void) {
  unsigned int limit = 4000000;

  unsigned int sum = 0;

  for (unsigned int i = 0; i <= limit; i++) {
    unsigned int y = fib(i);

    if (y > limit)
      break;

    if ((y <= limit) && (y % 2 == 0))
      sum += y;
  }
  printf("%u\n", sum);
}
