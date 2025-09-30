
#include <stdio.h>
#include <stdlib.h>

int primerjaj(const void *a, const void *b) {
    int o1 = *((int *)a);
    int o2 = *((int *)b);

    if (o1 % 2 == o2 % 2)
        return o1-o2;
    else
        return o1 % 2 - o2 % 2;
}

int main(int argc, char *argv[]) {
    int tab[] = {4,3,2,8,7,5,1,9,6,4,0};
    int n     = 11;

    qsort(tab, n, sizeof(int), &primerjaj);

    for (int i = 0; i < n; ++i)
      printf("%d ", tab[i]);
}
