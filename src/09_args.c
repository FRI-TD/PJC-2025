#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **env) {
    for (int i = 0; i < argc; ++i) {
        printf("%p\n", argv[i]);
    }

    char *p = argv[0];
    for (int i = 0; i < 300; ++i) {
        printf("%c", *p < 32 ? '?':*p); p++;
    }

    while (*env != NULL) {
        printf("PATH=%s\n", *env);env++;
    }

    printf("PATH=%s\n", getenv("PATH"));
}
