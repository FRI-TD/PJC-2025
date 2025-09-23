// echo ... vse, kar uporabnik vpiše, program PONOVI

#include <stdio.h>
#include <stdlib.h>

int main() {
    int c;

    // za branje brez ENTER v Linux okolju
    // system("/bin/stty raw");
    while (  (c = getchar()) != EOF  ) {
        putchar(c);
    }

}
