#include <stdio.h>

int main() {

    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z') {
        printf("%c is an uppercase letter.\n", a);
    }
    else if (a >= 'a' && a <= 'z') {
        printf("%c is a lowercase letter.\n", a);
    }
    else {
        printf("%c is neither an uppercase nor a lowercase letter.\n", a);
    }
}