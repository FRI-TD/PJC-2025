#include <stdio.h>

typedef void urediFunkcija(int*, int);


void bubblesort(int* t, int n) {
    printf("urejanje z BubbleSort\n");
}

void insertionsort(int* t, int n) {
    printf("urejanje z InsertionSort");
}

int main(int argc, char *argv[]) {
    int izbira = 1;  // doloca tip urejanja

    int n=6;
    int tab[] = {4,2,8,6,1,0};

    urediFunkcija *uredi;
    if (izbira == 1)
        uredi = &bubblesort;
    else
        uredi = &insertionsort;

    uredi(tab,n);
}

