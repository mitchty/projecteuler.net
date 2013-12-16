#include <stdio.h>

int square_sum(int end);

int square_sum(int end) {
  int sum = 0;
  for (int i = 1; i <= end; i++)
    sum += i*i;

  return sum;
}

int sum_of_squares(int end);

int sum_of_squares(int end){
  int sum = 0;
  for (int i = 1; i <= end ; i++)
    sum += i;

  return sum * sum;
}

int main(void) {
  static const int limit = 100;

  int lhs = sum_of_squares(limit);
  int rhs = square_sum(limit);

  printf("%i\n", (lhs - rhs));
}
