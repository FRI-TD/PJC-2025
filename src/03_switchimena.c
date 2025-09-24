#include <stdio.h>

int main() {
    int stevilo;
    scanf("%d", &stevilo);


    switch (stevilo) {
        case 2:
            printf("dva");
            break;
        case 4:
            printf("stiri");
            break;
        case 11:
            printf("enajst");
            break;
        case 42:
            printf("dvainstirideset");
            break;
        case 13:
            printf("trinajst");
    }

    printf("OK");
}
