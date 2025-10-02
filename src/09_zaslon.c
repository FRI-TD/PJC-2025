#define W 80
#define H 25
#include <stdio.h>
#include <stdlib.h>

char znak[] = {'#', '$', '*'};


int main(int argc, char *argv[]) {
    // // tabela tabel z "razmetanimi" podatki
    // char **zaslon = malloc(H * sizeof(void *));
    // for (int i = 0; i < H; ++i) {
    //     zaslon[i] = malloc(W * sizeof(char));
    // }

    char *blok = malloc(H * W * sizeof(char));

    char **zaslon = malloc(H * sizeof(char *));
    for (int i = 0; i < H; ++i) {
        zaslon[i] = blok + i*W;
    }

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            zaslon[i][j] = znak[(i+j) % 3];
        }
    }

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            printf("%c", zaslon[i][j]);
        }
        printf("\n");
    }


    // for (int i = 0; i < H; ++i) {
    //     free(zaslon[i]);
    // }
    free(blok);
    free(zaslon);
}
