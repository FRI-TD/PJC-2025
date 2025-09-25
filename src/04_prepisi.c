#include <stdio.h>
#include <stdlib.h>

int main() {
  char beseda[100];

  FILE *vhod  = fopen("../res/besede.txt", "r");
  FILE *izhod = fopen("../res/izhod.txt",  "w");

  if (vhod == NULL || izhod == NULL) {
    printf("Napaka!\n");
    exit(1);
  }

  while (fscanf(vhod, "%s", beseda) == 1) {
    fprintf(izhod, "%s ", beseda);
  }

  fclose(vhod);
  fclose(izhod);
}
