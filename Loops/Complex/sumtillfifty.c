#include <stdio.h>

int main() {
    int a = 0; 
    for (int i= 5; i<=50; i++){
        a = a+i;
    }
    printf("The sum of all integers from 5 to 50 is: %d\n", a);
}