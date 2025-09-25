#include <stdio.h>

// brez uporabe bitnih operatorjev. Pocasno!
int steviloBitov1(int x) {
    int result = 0;
    while (x != 0) {
        if (x % 2 == 1) result++;
        x = x / 2;
    }
    return result;
}

int steviloBitov2(int x) {
    int result = 0;
    while (x > 0) {
        if (x & 1 == 1) result++;
        x = x >> 1;
    }
    return result;
}

int steviloBitov3(int x) {
    int result = 0;
    while (x != 0) {
        result++;
        x = x & (x-1);
    }
    return result;
}


int main(int argc, char *argv[]) {
    int x = 128;  // 101010

    printf("Stevilo prizganih bitov v %d je %d\n", x, steviloBitov1(x));
    printf("Stevilo prizganih bitov v %d je %d\n", x, steviloBitov2(x));
    printf("Stevilo prizganih bitov v %d je %d\n", x, steviloBitov3(x));
}
