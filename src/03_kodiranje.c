#include <stdio.h>
#include <string.h>

extern int x;

void kodiraj(char[], char[], int);

int main() {
    char kljuc[10];
    char besedilo[10];

    printf("x=%d\n", x);

    printf("Vpisi besedilo: ");
    scanf("%s", besedilo);

    printf("Vpisi kljuc: ");
    scanf("%s", kljuc);

    int len = strlen(besedilo);
    kodiraj(besedilo, kljuc, len);
    printf("Zakodirano besedilo: %s\n", besedilo);

    kodiraj(besedilo,kljuc,len);
    printf("Odkodirano besedilo: %s\n", besedilo);
}
