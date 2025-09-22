#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    // inicializiramo nakljucni generator z nakljucnim semenom
    srand(time(NULL));

    int x = 5;

    int n = 1000000;
    int v_krogu = 0;
    for (int i=0; i<n; i++) {
        double x = (double) rand() / RAND_MAX;
        double y = (double) rand() / RAND_MAX;

        if (x*x + y*y <= 1) v_krogu++;
    }

    printf("pi=%.6f\n", (double)4*v_krogu/n);

}