#include <stdio.h>

int main() {

  int i = -1;
  if (i < i+1) {
    printf("int - OK\n");
  }

  unsigned int ui = -1;
  if (ui < ui + 1) {
    printf("unsigned int - OK");
  }

  printf("abcd\rxyz");

}
