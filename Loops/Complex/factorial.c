#include <stdio.h>

int main() {
    int n;
    int a=1;
    printf("Enter the value : ");
    scanf("%d", &n);
    for (int i =1; i <=n; i++){
        a=a*i;

    }
    printf("The factorial of %d is %d\n", n, a);
}