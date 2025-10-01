#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void zlij(int *t, int z, int k) {
    int s = (z+k)/2;
    int i = z, j = s+1;

    int *nova = malloc((k - z + 1)*sizeof(int));

    int n=0; // koliko elementov sem ze prepisal v novo tabelo
    while ((i<=s) && (j<=k)) {
        // if (t[i] < t[j]) {
        //     nova[n++] = t[i];
        //     i++;
        // } else {
        //     nova[n++] = t[j];
        //     j++;
        // }
        int *w = (t[i] < t[j]) ? &i : &j;
        nova[n++] = t[*w];
        (*w)++;
    }

    // prepisem morebitne elemente iz levega dela urejene tabele
    while (i <= s)
        nova[n++] = t[i++];

    // for (i=0; i<n; i++)
    //    t[z+i] = nova[i];
    memcpy(t + z, nova, n*sizeof(int));

    free(nova);
}

void mergesort(int *t, int z, int k) {
  if (z < k) {
      int s = (z+k)/2;
      mergesort(t, z, s);
      mergesort(t, s+1, k);
      zlij(t, z, k);
  }
}


int main(int argc, char *argv[]) {
    int tab[] = {4,3,7,1,9,4,3,0,10,8,5};
    int n = sizeof(tab)/sizeof(int);

    mergesort(tab, 0, n-1);
    for (int i = 0; i < n; ++i) {
        printf("%d ", tab[i]);
    }
}
