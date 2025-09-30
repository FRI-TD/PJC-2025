#include <stdlib.h>
// razsiri tabelo za eno mesto (realloc iz n na n+1)
void razsiri(int **p, int *n) {
    int *nova = malloc((*n+1)*sizeof(int));
    for (int i = 0; i < *n; ++i) {
        nova[i] = *p[i];
    }
    free(*p);
    *p=nova;

    (*n)++;
}

int main(int argc, char **argv) {
    int n=10;  // koliko elementov imam v tabeli
    int *tab = malloc(n*sizeof(int));

    // ....

    razsiri(&tab, &n);
}
