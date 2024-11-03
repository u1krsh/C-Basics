#include <stdio.h>
int sqr(int *n);
int main(){
    int num = 5;
    sqr(&num); 
    printf("Number = %d\n", num);
    return 0;
}

int sqr(int *n){
    *n=  (*n)*(*n);
    printf("Square = %d\n", *n);
}
