#include <stdio.h>
#include <string.h>

int string2int(char stevilo[]) {
  if (strlen(stevilo)==0) return 0;
  int vsota = 0;
  for (int i = (stevilo[0]=='-') ; i < strlen(stevilo); i++) {
    int cifra = stevilo[i] - '0';
    vsota = vsota * 10 + cifra;
  }
  return (stevilo[0]=='-' ? -1 : 1) * vsota;
}

int main() {
  char stevilo[10];
  printf("Vpisi stevilo: ");
  scanf("%s", stevilo);

  int vrednost = string2int(stevilo);
  printf("Vrednost stevila '%s' je %d\n", stevilo, vrednost);
}
