#include <stdio.h>

int main(int argc, char *argv[]) {
    long long x;  // bom uporabil za shranjevanje naslova

    int y = 7;

    x = (long long) &y;
    *((long long *)x) = 15;

    printf("%d\n", y);
}
