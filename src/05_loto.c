#define MAX 39
#define N 7
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void uredi(int[], int);

int main(int argc, char *argv[]) {
    int loto[N];  // tabela loto stevil

    int stevila[MAX];
    for (int i = 0; i < MAX; ++i)
      stevila[i] = i+1;

    // ob vsakem pogonu programa bo drugo seme
    srand(time(NULL));

    int razpon = MAX;
    for (int i = 0; i < N; ++i) {
        int x = rand() % razpon; // 0 ... razpon-1
        loto[i] = stevila[x];
        stevila[x] = stevila[razpon-1];
        razpon--;
    }

    uredi(loto, N);

    for (int i = 0; i < N; ++i) {
        printf("%d ", loto[i]);
    }
    printf("\n");
}
