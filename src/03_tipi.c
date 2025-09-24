#include <limits.h>
#include <stdio.h>

int main() {

    printf("tip: %s, velikost: %d bajtov, najvecje stevilo: %u\n",
         "unsigned int", sizeof(unsigned int), UINT_MAX);
    printf("tip: %s, velikost: %d bajtov\n", "signed int", sizeof(signed int));

    printf("tip: %s, velikost: %d bajtov\n, najvecje stevilo: %d", "unsigned short", sizeof(unsigned short), USHRT_MAX);
    printf("tip: %s, velikost: %d bajtov\n", "signed short", sizeof(signed short));

    printf("tip: %s, velikost: %d bajtov, najvecje stevilo: %d\n",
        "long int",      sizeof(long int), LONG_MAX);
    printf("tip: %s, velikost: %d bajtov, najvecje stevilo: %lld\n",
        "long long int", sizeof(long long int), LONG_LONG_MAX);

}
