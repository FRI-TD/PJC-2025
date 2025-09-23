#include <stdio.h>

int main(int argc, char *args[]) {
    int tabela[50];

    printf("Velikost: %d\n", sizeof(tabela));
    printf("Stevilo elementov: %d\n", sizeof(tabela)/sizeof(int));

    printf("Stevilo argumentov: %d\n", sizeof(args));

    int n;
    printf("Vpisi velikost: ");
    fflush(stdout);
    scanf("%d", &n);
    int tab2[n];
    printf("Velikost tab2: %d\n", sizeof(tab2));

    int t1[] = {1,2,3,4};
    int t2[10] = {0};
    int t3[] = {5,6,7};
    int t4[10];
    int t5[] = {8,9};
    printf("x");
}
