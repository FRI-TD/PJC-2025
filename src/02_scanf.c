#include <stdio.h>

int main() {
    int starost=5;

    printf("Vpisi starost: ");
    // NI OK!
    // scanf("%d", starost);        // ====  scanf("%d", 5);

    scanf("%d", &starost);

    printf("Star si %d let\n", starost);
}