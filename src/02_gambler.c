// program generira stevilo iz intervala [a,b]
// uporabnik ugiba x
// program pove ali je uporabnik uganil

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int a, b, x;

    while (true) {
      printf("Vpiši spodnjo mejo intervala: ");
      scanf("%d", &a);

      printf("Vpiši zgornjo mejo intervala: ");
      scanf("%d", &b);

      printf("Vpisi stevilo: ");
      scanf("%d", &x);

      srand(time(NULL));
      int rnd = rand();
      rnd = a + rnd % (b-a+1);

      if (rnd == x)
        printf("BRAVO!\n");
      else
        printf("Ne, izbral sem %d\n", rnd);
    }
}