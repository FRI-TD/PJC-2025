#include <stdio.h>
#include <string.h>

int dolzina(char niz[]) {
  int i = 0;
  while (niz[i] != '\0') i++;
  return i;
}

int main() {
  char niz1[10] = "ABC";
  char niz2[]   = "DEF";

  printf("niz1: %d, niz2: %d\n", sizeof(niz1), sizeof(niz2));

  printf("Dolzina niza 1: %d, dolzina niza 2: %d\n", strlen(niz1), strlen(niz2));
  printf("Dolzina niza 1: %d, dolzina niza 2: %d\n", dolzina(niz1), dolzina(niz2));

  strcpy

  return 0;
}
