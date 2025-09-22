#include <stdio.h>

int main(int argc, char *args[]) {
    int x=5;
    printf("%.2f\n", 3);
    printf("Stevilo podanih argumentov: %d\n", argc);
    printf("args[0]: %s\n", args[0]);

    for (int i = 1; i < argc; i++) {
      printf("Argument %d: %s\n", i, args[i]);
    }
}