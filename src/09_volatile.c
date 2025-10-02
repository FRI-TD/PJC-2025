#include <stdio.h>

int main(int argc, char *argv[]) {
    volatile int i = 4;
    int j = 5;

    int *p = &j;
    *p     = 15;

    p++;
    *p = 14;

    printf("i=%d, j=%d\n", i, j);
}
