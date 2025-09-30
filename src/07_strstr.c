#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *niz = "Beseda v malo daljsem nizu";

    // izpis prve besede v obratnem vrstnem redu
    char *nasel = strstr(niz, " ");
    while (nasel >= niz) {
        printf("%c", *nasel);
        nasel--;
    }
    printf("\n------------\n");

    // izpis vseh besed
    char *zacetek = niz;
    while (strlen(zacetek) > 0) {
      char *presledek = strstr(zacetek, " ");

        if (presledek == NULL) {
          printf("%s", zacetek);
          break;
      }
      while (zacetek < presledek) {
        printf("%c", *zacetek);
        zacetek++;
      }
      printf("\n");fflush(stdout);
      zacetek++;
    }
}
