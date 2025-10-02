#include <stdio.h>

void izpisi(int t[1][5]) {
    printf("%d\n", t[2][4]);
}

int main(int argc, char *argv[]) {
    int t[][5] = {1,2,3,4,5,6,7,8};

    izpisi(t);
}
