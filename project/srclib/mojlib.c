#include "moj.h"
#include <stdio.h>

// Izpis niza N-krat
void izpisi(char *niz) {
    int i;
    for (i=0; i<N+1; i++)
        printf("%d + %s\n", i, niz);
}

