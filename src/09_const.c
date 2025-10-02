#include <stdio.h>

int main(int argc, char *argv[]) {
    const int b = 4;

    int *p = &b;
    *p = 5;

    printf("%d\n", b);
}
