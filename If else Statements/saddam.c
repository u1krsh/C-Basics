#include <stdio.h>

int main() {
    // Line 1
    for (int i = 0; i < 11; i++) {
        printf("*");
    }
    printf("\n");
    
    // Line 2
    for (int i = 0; i < 11; i++) {
        printf("*");
    }
    for (int i = 0; i < 14; i++) {
        printf(" ");
    }
    for (int i = 0; i < 32; i++) {
        printf("*");
    }
    printf("\n");

    // Line 3
    for (int i = 0; i < 65; i++) {
        printf("*");
    }
    for (int i = 0; i < 12; i++) {
        printf(" ");
    }
    for (int i = 0; i < 9; i++) {
        printf("*");
    }
    printf("\n");

    // Line 4
    for (int i = 0; i < 91; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
