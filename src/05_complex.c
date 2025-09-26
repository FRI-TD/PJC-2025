#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct kompleksno {
    double re;
    double im;
} cplx;

void izpisi(cplx w) {
    printf("%.2f %c %.2f i \n", w.re, w.im < 0 ? '-' : '+', fabs(w.im));
}

void zamenjaj(struct kompleksno a, struct kompleksno b) {
    double tmp;
    tmp = a.re;
    a.re = b.re;
    b.re = tmp;

    tmp = a.im;
    a.im = b.im;
    b.im = tmp;
}

int main(int argc, char *argv[]) {
    struct kompleksno x;
    x.re = 3;
    x.im = -2;

    struct kompleksno w  = {1, 3};  // 1 + 3*i
    struct kompleksno z  = {.im=4, .re=7};
    struct kompleksno w1 = {.im=5};

    izpisi(x);
    zamenjaj(x,w);
    izpisi(x);
    izpisi(w);
}
