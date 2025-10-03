#include <stdio.h>

union stevilo {
    int i;
    double d;
};

struct num {
    int type;
    union stevilo s;
};

void izpisi(struct num x) {
    if (x.type == 1)
        printf("%.2f\n", x.s.d);
    else
        printf("%d\n", x.s.i);
}

typedef union mint {
    int i;
    struct {
        unsigned char b4;
        unsigned char b3;
        unsigned char b2;
        unsigned char b1;
    } bytes;
} mint;

int main(int argc, char *argv[]) {
    union stevilo n;

    n.i =5;
    printf("%d\n", n.i);

    n.d = 17;
    printf("%.2f\n", n.d);

    printf("%d\n", n.i);

    struct num x;

    x.type = 1;
    x.s.d=3.14;
    izpisi(x);

    x.type  = 2;
    x.s.i = 42;
    izpisi(x);

    mint i;
    i.i = 0x12345678;
    printf("i=%x\n", i.i);
    printf("b1=%x, b2=%x, b3=%x, b4=%x\n", i.bytes.b1, i.bytes.b2, i.bytes.b3, i.bytes.b4);
}

