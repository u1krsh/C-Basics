#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    for(int i=0; i<=a; i++){
        printf("%d \n", i);
    }
}