#include <stdio.h>
#include <string.h>

int strlen1(char niz[]) {
    int i=0;
    while (niz[i] != '\0') i++;
    return i;
}

int strlen2(char *niz) {
    int i=0;
    while (*niz != '\0') {
        niz++; i++;
    }
    return i;
}


int main(int argc, char *argv[]) {
    char niz[] = "ponedeljek";
    printf("dolzina (strlen1): %d\n", strlen1(niz));
    printf("dolzina (strlen2): %d\n", strlen2(niz));
}
