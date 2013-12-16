//#include <stdio.h>
#include <assert.h>
#include <limits.h>
 
static const unsigned int divisors[10] = {19,17,13,11,7,5,3,2,9,16};
static const unsigned int expected = 232792560;

int main(void) {
//  unsigned int cursor = 2520;
    
//  while (1) {
//    cursor += 60;
    for(unsigned int cursor = 2520; cursor < INT_MAX; cursor += 60){
    if (cursor % divisors[0] == 0 && cursor % divisors[1] == 0 &&
        cursor % divisors[2] == 0 && cursor % divisors[3] == 0 &&
        cursor % divisors[4] == 0 && cursor % divisors[5] == 0 &&
        cursor % divisors[6] == 0 && cursor % divisors[7] == 0 &&
        cursor % divisors[8] == 0 && cursor % divisors[9] == 0) {
//         printf("%i\n", cursor);
  assert(cursor == expected);
         break;
       }
    }
//  }
}
