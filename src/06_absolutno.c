#include <stdio.h>

int main(int argc, char *argv[]) {
    int x = 13;
//    printf("%p\n", &x);

//    long long naslov;
//    printf("Vpisi naslov, kamor naj napisem 42: ");
//    scanf("%llx", &naslov);

    int *p;
    p = &x;   // s kazalcem p pokazem na x
    *p = 42;  // tja, kamor kaze p, vpisem 42

    printf("%d\n", x);
}
