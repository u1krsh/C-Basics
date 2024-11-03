#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 4; i++) {
        // Print spaces
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
