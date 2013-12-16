#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int fib(unsigned int to, unsigned int memoized[]);

unsigned int fib(unsigned int to, unsigned int memoized[]) {
  unsigned int rv = 0;

  if (to < 2) {
    memoized[to] = 0;
    return to;
  } else {
    if (to > 1) {
      if (memoized[to] == 0) {
        rv = fib(to - 1, memoized) + fib(to - 2, memoized);
        memoized[to] = rv;
        return rv;
      } else {
        return memoized[to];
      }
    }
  }

  return rv;
}

int main(void) {
  unsigned int limit = 4000000;
  unsigned int memoized_limit = 100;
  unsigned int sum = 0;
  unsigned int *memoized;
  memoized = malloc(sizeof(unsigned int) * memoized_limit);

  memset(memoized, 0, sizeof(unsigned int) * memoized_limit);

  for (unsigned int i = 0; i <= limit; i++) {
    unsigned int y = fib(i, memoized);

    if (y > limit)
      break;

    if ((y <= limit) && (y % 2 == 0))
      sum += y;
  }
  printf("%u\n", sum);
  free(memoized);
}
