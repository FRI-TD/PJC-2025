#define N 40000
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void uredi(int[], int);

int main(int argc, char *argv[]) {
    int tab[N];
    srand(time(NULL));
    for (int i = 0; i < N; ++i) {
        tab[i] = rand() % 100;
    }

    clock_t start, end;

    start = clock();
    uredi(tab, N);
    end = clock();

    printf("Cas izvajanja: %.2f s\n", (double) (end - start) / CLOCKS_PER_SEC);

    /*
    for (int i = 0; i < N; ++i) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    */
}
