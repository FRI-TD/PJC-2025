#define W 70
#define H 20
#include <math.h>
#include <stdio.h>

char zaslon[H][W];

// pobrisemo vsebino zaslona
void clear() {
    for (int i = 0; i<H; i++)
        for (int j=0; j<W; j++)
            zaslon[i][j] = ' ';
}

void izpisi() {
    for (int i = 0; i<H; i++) {
        for (int j=0; j<W; j++)
            printf("%c", zaslon[i][j]);
        printf("\n");
    }
}

void koordinatni_sistem() {
    for (int j = 0; j<W; j++)
        zaslon[H/2][j] = '-';
    for (int i = 0; i<H; i++)
        zaslon[i][W/2] = '|';
    zaslon[H/2][W/2] = '+';
}

void graf() {
    double x1 = -3.14;
    double x2 = 3.14;
    double y1 = -1;
    double y2 = 1;

    for (int j = 0; j<W; j++) {
        double x = j * (x2 - x1) / (W-1) + x1;
        double y = sin(2*x);
        int i = (H-1) * (y - y1) / (y2-y1);

        zaslon[H-i-1][j] = '*';
    }
}

int main() {
    clear();
    koordinatni_sistem();
    graf();
    izpisi();
}