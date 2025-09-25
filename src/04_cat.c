#include <stdio.h>

#define N 100

void cat(FILE *vhod) {
    char vrstica[N];
    while (!feof(vhod)) {
        fgets(vrstica, N, vhod);
        printf("%s", vrstica);
    }
}

int main(int argc, char *args[]) {
  if (argc == 1)
    cat(stdin);
  else {
      for (int i=1; i<argc; i++) {
          FILE *f = fopen(args[i], "r");
          cat(f);
          fclose(f);
      }
  }
}