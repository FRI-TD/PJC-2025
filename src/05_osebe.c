#define MAX 20
#define N 5
#include <stdio.h>

struct oseba {
    char ime[MAX];
    char priimek[MAX];
    int starost;
};

int main(int argc, char *argv[]) {
    // int tab[N];
    struct oseba o[N];

    for (int i = 0; i < N; ++i) {
        printf("Vpisi %d. ime: ", i+1);
        scanf("%s", o[i].ime);

        printf("Vpisi %d. priimek: ", i+1);
        scanf("%s", o[i].priimek);

        printf("Vpisi %d. starost: ", i+1);
        scanf("%d", &o[i].starost);
    }

    printf("Pozdravljen, %s %s, star si %d let.\n", o[0].ime, o[0].priimek, o[0].starost);
}


