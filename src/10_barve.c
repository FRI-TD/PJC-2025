
#include <stdio.h>

enum BARVE {RDECA=255<<16, ZELENA=255<<8, MODRA=255};

enum DAN {PO=1, TO=2, SR=4, CE=3, PE, SO, NE};

int main(int argc, char *argv[]) {
    enum BARVE barva;

    barva = MODRA;

    printf("Barva: %d\n", barva);

    if (barva == 15) {
        printf("OK\n");
    }

    if (barva == RDECA) {
      printf("RDECA");
    }

    printf("Nedelja: %d\n", NE);
 }
