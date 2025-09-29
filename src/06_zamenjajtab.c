#include <stdio.h>
// zamenjaj i-ti in j-ti element v tabeli t
void zamenjaj(int t[], int i, int j) {
    int tmp = t[i];
    t[i] = t[j];
    t[j] = tmp;
}

int main(int argc, char *argv[]) {
    int t[] = {0,1,2,3,4,5,6,7,8,9};

    zamenjaj(t, 2, 5); // isto kot zamenjaj(&t[0], 2, 5);

    for (int i = 0; i < 10; ++i)
        printf("%d ", t[i]);
    printf("\n");
}
