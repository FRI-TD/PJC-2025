#define N 5
#include <stdio.h>
#include <string.h>

int main() {
    char ime[N];
    char dime[N];

    printf("Vpisi ime: ");
    // scanf("%s %s", ime, dime);       // izjema: pri nizih ne potrebujemo &
    // scanf("%[^\n]", ime);
    //printf("Pozdravljen, %s %s\n", dime, ime);

    scanf("%s", ime);
    printf("Pozdravljen, %s\n", ime);

    for (int i=strlen(ime)-1; i>=0; i--)
        putchar(ime[i]);
    putchar('\n');
}
