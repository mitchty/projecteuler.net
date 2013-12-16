#include <stdio.h>
#include <stdbool.h>

int main(void) {
#define DIM 8
#define DIM2 10
  static const unsigned int divisors[DIM] = {19,17,13,11,7,5,3,2};
  static const unsigned int rest[DIM2] = {20,18,16,15,14,10,9,8,6,4};
  // "cheating" a bit, but the number has to be about this big when you
  // figure out the smallest prime that can have no remainder above is 
  // just under 100_000_000, so double that for the %2 check, and you get
  // close enough/past the point where you get false positives by
  // "cheating" and checking only the above divisors
//  unsigned int cursor = 2520;
#define ALMOST200BILLION 33333*60
  unsigned int cursor = ALMOST200BILLION;
//  unsigned int cursor = 0;
    
  bool ok = false;
  while (1) {
    cursor += 60;
    for(int i = 0; i< DIM; i++){
      ok = true;
      if (cursor % divisors[i] != 0) {
        ok = false;
        break;
      }
      for(int j = 0; j < DIM2; j++){
        if (cursor % rest[j] != 0) {
          ok = false;
          break;
        }
      }
    }
    if (ok){
      printf("%i\n", cursor);
      return 0;
    }
  }
}
