#include <stdio.h>

void izpis() {
    static int prvic = 1;

    if (prvic == 1) {
        printf("Prvi klic\n");
        prvic = 0;
    } else {
        printf("Naslednji klic\n");
    }
}

int main(int argc, char *argv[]) {
    izpis();
    izpis();
    izpis();
}

