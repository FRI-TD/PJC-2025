#include <stdio.h>

int main(int argc, char *argv[]) {
    char a[] = {'a', 'b', 'c','d','e','f','g'};

    char *pa;
    pa = a;          // isto kot pa = &a[0];
    *pa = 'z';       // a[0] = 'z';   pa[0] = 'z'

    *(pa+1) = 'y';  // a[1] = 'y';
    *(pa+5) = 'q';  // a[5] = 'q';

//    pa++;
//    *pa = '1';      // a[1]

    pa[3] = '3';
    pa[100] = 'a';


    for (int i = 0; i < sizeof(a); ++i)
        printf("%c ", a[i]);
    printf("\n");
}
