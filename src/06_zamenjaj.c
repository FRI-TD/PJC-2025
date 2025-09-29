#include <stdio.h>

void zamenjaj(int *x, int *y) {
    int tmp = *x;
    *x=*y;
    *y=tmp;
}

int main(int argc, char *argv[]) {
    int a=5;
    int b=10;

    printf("a=%d, b=%d\n", a, b);
    // zamenjaj(a,b);  // zamenjaj(5,10)

    zamenjaj(&a, &b);

    printf("a=%d, b=%d\n", a, b);
}
