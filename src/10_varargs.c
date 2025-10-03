#include <stdarg.h>
#include <stdio.h>

void izpisi(int margs, ...) {
    va_list arg_list;
    int my_arg;


    va_start(arg_list, margs);

    for (my_arg = margs; my_arg != 0; my_arg = va_arg(arg_list, int) ) {
        printf("%d\n", my_arg);
    }

    va_end(arg_list);
}

int main(int argc, char *argv[]) {
    izpisi(1,2,3,4,5,6,7,8,9,0);
}

