#include <stdio.h>

int get_random() {
    asm(".intel_syntax noprefix   \n"
        " MOV ebx, 42             \n"
        " ADD ebx, 10             \n"
        " MOV eax, ebx            \n"
        :  // output
        :  // input
        : "ebx"   // clobbered registers
    );
}

int get_flags() {
    asm(".intel_syntax noprefix   \n"
        " MOV eax, 0x7fffffff     \n"
        " ADD eax, 1              \n"
        " PUSHF                   \n"
        " POP eax                 \n"
    );
}

void swap(int *x, int *y) {
    asm(".intel_syntax noprefix   \n"
        " MOV ecx, [eax]          \n"
        " MOV edx, [ebx]          \n"
        " MOV [eax], edx          \n"
        " MOV [ebx], ecx          \n"
        
        :  // output
        : "a"(x), "b"(y) // input
        : "ecx", "edx"
    );

}

int main(int argc, char *argv[]) {
    int x = get_random();
    printf("x=%d\n", x);

    printf("flags=%d\n", get_flags());


    int a=5, b=10;
    printf("a=%d, b=%d\n", a, b);
    swap(&a,&b);
    printf("a=%d, b=%d\n", a, b);
}
