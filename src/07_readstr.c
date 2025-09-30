#include <stdio.h>
#include <stdlib.h>

#define MAX 10



// prebere (iz stdin) in vrne besedo
// taka funkcija je nevarna, saj rezervira prostor,
// uporabnik pa ga lahko pozabi sprostiti!
char * preberiBesedo() {
    char* beseda = malloc(MAX * sizeof(int));
    scanf("%s", beseda);
    return beseda;
}

void preberi(char *beseda) {
    scanf("%s", beseda);
}

int main(int argc, char *argv[]) {
    printf("Vpisi ime: ");
    char *ime = malloc(sizeof(char)*MAX);
    preberi(ime);

    printf("Vpisi priimek: ");
    char *priimek = malloc(sizeof(char)*MAX);
    preberi(priimek);


    printf("Pozdravljen, %s %s\n", ime, priimek);

    free(ime);
    free(priimek);
}
