#pragma pack(1)

#include <stdio.h>

typedef struct {
    unsigned int magic;
    unsigned short minor;
    unsigned short major;
    unsigned short cp_count;
} class;


unsigned short int swap16(unsigned short int x) {
    return (x >> 8) | (x << 8);
}

unsigned int swap32(unsigned int x) {
    return (swap16(x & 0xFFFF) << 16) | swap16(x >> 16);
}


int main(int argc, char *argv[]) {

    FILE *f = fopen("Test.class", "rb");
    if (f == NULL) {
        printf("Napaka!\n");
        return 1;
    }

    class cl;
    fread(&cl, sizeof(class), 1, f);
    fclose(f);

    printf("%X\n", swap32(cl.magic));
    printf("%d\n",swap16(cl.major));
    printf("%d\n",swap16(cl.cp_count));
}
