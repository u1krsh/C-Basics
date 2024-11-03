#include <stdio.h>

int main() {
    int a;
    int b = 0;
    printf("Enter an integer: ");
    scanf("%d", &a);
    for(int i=a; i>=0; i--){
        printf("%d \n", i);
        b=b+i;
    }
    printf("%d ",b);
}