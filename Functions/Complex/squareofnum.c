#include <stdio.h>
#include <math.h>

void square(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    square(n);
    return 0;
}

void square(int n){
    int result = pow(n,2);
    printf("The square of %d is: %d\n", n, result);
}
