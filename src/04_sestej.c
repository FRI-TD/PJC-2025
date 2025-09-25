#include <stdio.h>

int sestej(int x, int y) {
    while (y != 0) {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int main(int argc, char *argv[]) {
    int x = -10;
    int y = 130;
    int z = sestej(x,y);

    printf("%d + %d = %d\n", x, y, z);
}
