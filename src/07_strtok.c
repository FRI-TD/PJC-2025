#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    //char *str = malloc(12);
    //strcpy(str, "abc:def:ghi");

    char str[] = "abc:def:ghi";
    char delim[] = ":";

    char *result;
    result = strtok(str, delim);
    while (result != NULL) {
        printf("%s\n", result);
        result = strtok(NULL, delim);
    }

    printf("%s\n", str);
}
