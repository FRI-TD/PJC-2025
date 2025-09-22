#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int main() {
    // arc4random
    srand(time(NULL));
    for (int i=0; i<10; i++) {
        int x = rand();
        printf("%d\n", x);
    }

    printf("%d\n", RAND_MAX);
}
