#define N 7
#include <stdio.h>

char igra[N][N] = {
    {' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ','x',' ',' ',' '},
    {' ',' ',' ','x',' ',' ',' '},
    {' ','o',' ','x','x',' ',' '},
    {' ',' ','o','x','o',' ',' '},
    {' ','o','x','o','o',' ',' '},
    {' ','x','o','x','o',' ',' '}
};

int prestej(int i, int j, int deltaI, int deltaJ) {
    char znak = igra[i][j];
    int enaki = 0;
    while (1) {
        i+=deltaI; j+=deltaJ;
        if (i>=0 && i<N && j>=0 && j<=N && igra[i][j] == znak)
            enaki++;
        else break;
    }
    return enaki;
}


int main() {
    int i=6, j=4;
    if (prestej(i,j,0,1)  + prestej(i,j,0,-1)  >= 3) printf("vodoravno\n");
    if (prestej(i,j,1,0)  + prestej(i,j,-1,0)  >= 3) printf("navpicno\n");
    if (prestej(i,j,-1,1) + prestej(i,j,1,-1)  >= 3) printf("desna diagonala\n");
    if (prestej(i,j,1,1)  + prestej(i,j,-1,-1) >= 3) printf("leva diagonala\n");
}