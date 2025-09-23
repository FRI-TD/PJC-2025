#include <stdio.h>

int main() {
    int starost;
    char ime[5];

    printf("Vpisi starost: "); scanf("%d", &starost);
    printf("Vpisi ime: "); scanf("%s", ime);

    printf("Pozdravljen, %s, star si %d let\n",ime, starost);
}
