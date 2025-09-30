#include <math.h>
#include <stdio.h>

// matematicna operacija, ki prejme dva inta in vrne int
typedef int op(int, int);

// int operacija(int(*f)(int, int), int a, int b) {}
int operacija(op *f, int a, int b) {
    return f(a,b);
}

int add(int a, int b) {return a+b;}
int mul(int a, int b) {return a*b;}

// racunanje trigonometricnih funkcij
double trig(double(*tf)(double), double x) {
    return tf(x);
}

int main(int argc, char *argv[]) {

    op *funk;
    int izbira = 2;

    if (izbira == 1)
        funk = add;
    else
        funk = mul;

    printf("%d\n", operacija(funk, 5,7));

    printf("%.2f\n", trig(sin, 0));
    printf("%.2f\n", trig(cos, 0));
}


