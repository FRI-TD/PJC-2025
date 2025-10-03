#include <stdio.h>

#define N 10

#define forever for(;;)

#define min(X,Y) X < Y ? X : Y

#define kvadrat(X) X*X

// #define dprint(expr) printf(#expr" = %g\n", expr);



int minimum(int x, int y) {
    return x < y ? x : y;
}

int main(int argc, char *argv[]) {
    // forever
      printf("%d\n", N);

    int a = 5;
    int b = 16;
    printf("min %d in %d je %d\n", a, b, min(a++,b));
    printf("minimum %d in %d je %d\n", a, b, minimum(a++,b));
#ifdef DEBUG
   // dprint(a/b);
#endif

    int x = 10;
#ifdef DEBUG
    printf("Racunam kvadrat");
#endif
    printf("Kvadrat %d je %d\n", x, kvadrat(x++));
}
