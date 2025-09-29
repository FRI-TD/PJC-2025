#include <stdio.h>

int main(int argc, char *argv[]) {
    int a[10];

    printf("Ime: %p, naslov: %p, naslov od a: %p\n", a, &a[0], &a);
    printf("%p\n", &a[1]);
}
