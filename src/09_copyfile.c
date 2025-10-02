#include <stdio.h>

int main(int argc, char *args[]) {
    char *imeVhodne  = args[1];
    char *imeIzhodne = args[2];

    FILE *fIN  = fopen(imeVhodne, "r");
    FILE *fOUT = fopen(imeIzhodne, "w");

    if (fIN == NULL || fOUT == NULL) {
        printf("Napaka!\n");
        return 1;
    }

    int z;
    while ((z = fgetc(fIN)) != EOF) {
      fputc(z, fOUT);
    }

    fclose(fIN);
    fclose(fOUT);
}
