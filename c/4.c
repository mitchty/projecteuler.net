#include <stdlib.h>
#include <stdio.h>

int main(void) {
  for (int i = 999; i > 900; i--) {
    for (int j = 999; j > 900; j--) {
      int k = i * j;
      char *p;
      asprintf(&p, "%i", k);
      if (p[0] == p[5])
        if (p[1] == p[4])
          if (p[2] == p[3]) {
            printf("%i\n", k);
            free(p);
            return 0;
          }
      free(p);
    }
  }
}
