#define N 10

#include <stdio.h>

int main() {
    char vrstica[N];  // tabela N znakov     (java: char vrstica[] = new char[N])

    fgets(vrstica, N, stdin);
    printf("%s", vrstica);
    printf("test");
}