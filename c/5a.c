#include <stdio.h>
#include <stdbool.h>
 
int main(void) {
  static const unsigned int unlikely_divisors[8] = {19,17,13,11,7,5,3,2};
  unsigned int cursor = 333333*60;
    
  while (1) {
    cursor += 60;
    if (cursor % unlikely_divisors[0] == 0)
      if (cursor % unlikely_divisors[1] == 0)
        if (cursor % unlikely_divisors[2] == 0)
          if (cursor % unlikely_divisors[3] == 0)
            if (cursor % unlikely_divisors[4] == 0)
              if (cursor % unlikely_divisors[5] == 0)
                if (cursor % unlikely_divisors[6] == 0)
                  if (cursor % unlikely_divisors[7] == 0){
                    printf("%i\n", cursor);
                    return 0;
                  }
  }
}
