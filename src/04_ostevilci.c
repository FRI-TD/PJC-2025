#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main() {
    FILE *f;   // rocica za dostop do datoteke

    f = fopen("../res/besede.txt", "r");
    if (f == NULL) {
        printf("Napaka pri odpiranju datoteke!\n");
        exit(1);
    }

    int i=0;
    char vrstica[N];
    int nova = 1;
    while (!feof(f)) {
        if (nova) {
            printf("%d. ", ++i);
            nova = 0;
        }

        fgets(vrstica, N, f);
        printf("%s", vrstica);

        if (vrstica[strlen(vrstica)-1] == '\n') nova = 1;
        strcpy(vrstica, "");
    }

    fclose(f);
}
