#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    //char *str = malloc(12);
    //strcpy(str, "abc:def:ghi");
    //               2    4    5
    char str[] = "::user::def:xyz";
    char delim[] = ":";

    char *result;
    result = strtok(str, delim);
    int i=0;
    while (result != NULL) {
        char *back = result;
        int cnt = 0;
        do {
            back--;
            if (back < str) break;
            cnt++;
        } while (*back == delim[0]);
        i += cnt;

        printf("%d. %s\n", i, result);
        result = strtok(NULL, delim);
    }
}
