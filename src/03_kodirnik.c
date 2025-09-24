#include <string.h>

int x = 5;

static int moja_privatna = 42;

void kodiraj(char niz[], char kljuc[], int len) {
    for (int i=0; i<len; i++) {
        char crka = niz[i];
        char k    = kljuc[i % strlen(kljuc)];
        char code = crka ^ k;
        niz[i]    = code;
    }
}
