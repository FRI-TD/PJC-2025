#include <stdio.h>

#define N 4096

int main(int argc, char *args[]) {
    char *imeVhodne  = args[1];
    char *imeIzhodne = args[2];

    FILE *fIN  = fopen(imeVhodne,  "rb");
    FILE *fOUT = fopen(imeIzhodne, "wb");

    if (fIN == NULL || fOUT == NULL) {
        printf("Napaka!\n");
        return 1;
    }

    // int z;
    // while ((z = fgetc(fIN)) != EOF) {
    //   fputc(z, fOUT);
    // }

    char buffer[N];
    int z; // dejansko stevilo prebranih bajtov

    do {
        z = fread(buffer, 1, N, fIN);
        if (z > 0)
            fwrite(buffer, 1, z, fOUT);
    } while (z > 0);

    fseek(fOUT,0, SEEK_END);  // skok na konec datoteke
    int len = ftell(fOUT);  //  kje v datoteki se nahaja
    fseek(fOUT, 0, SEEK_SET);  // skok na zacetek datoteke
    printf("%d\n", len);

    fclose(fIN);
    fclose(fOUT);
}
