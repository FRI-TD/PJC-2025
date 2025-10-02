#define W 5
#define H 5
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int *blok = malloc(H * W * sizeof(int));

    int **zaslon = malloc(H * sizeof(int *));
    for (int i = 0; i < H; ++i) {
        zaslon[i] = blok + i*W;
    }

    for (int i = 0; i < H; ++i) {
        printf("%p\n", zaslon[i]);
    }

    for (int i = 0; i < H; ++i) {
        free(zaslon[i]);
    }
    free(zaslon);
}
