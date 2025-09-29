#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double re;
    double im;
} cplx;

cplx sestej(cplx x1, cplx x2) {
    cplx r;
    r.re = x1.re + x2.re;
    r.im = x1.im + x2.im;
    return r;
}

int main(int argc, char *argv[]) {
    cplx w = {3,4};
    cplx z = {-1,2};

    cplx vsota = sestej(w,z);

    printf("(%.2f + %.2f i) + (%.2f + %.2f i) = %.2f + %.2f i \n",
        w.re, w.im, z.re, z.im, vsota.re, vsota.im);

    cplx *pc;
    pc = &w;
    printf("pc: %.2f, %.2f\n", (*pc).re, (*pc).im);
    printf("pc: %.2f, %.2f\n", pc->re,   pc->im);

    cplx *nc;
    nc = malloc(sizeof(cplx));
    nc->re = 5;
    nc->im = 7;
    printf("nc: %.2f, %.2f\n", nc->re,   nc->im);

    double *dp;
    dp = (double *) nc;
    *dp = 15;
    *(dp+1)=13;
    printf("nc: %.2f, %.2f\n", nc->re,   nc->im);

    printf("sizeof(cplx)=%d\n", sizeof(cplx));

    free(nc);
}


