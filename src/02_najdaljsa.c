#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define N 100

int main() {
    char najdaljsa[N];
    strcpy(najdaljsa, "");

    char trenutna[N];

    while (true) {
        fgets(trenutna, N, stdin);
        trenutna[strlen(trenutna)-1] = '\0';

        if (strlen(trenutna) == 0) {
            printf("Najdaljsa: '%s'\n", najdaljsa);
            break;
        }

        if (strlen(trenutna) > strlen(najdaljsa))
            strcpy(najdaljsa, trenutna);
    }
}
