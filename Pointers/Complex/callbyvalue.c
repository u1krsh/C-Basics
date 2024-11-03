#include <stdio.h>
int sqr(int n);
int main(){
    int num = 5;
    sqr(num); 
    printf("Number = %d\n", num);
    return 0;
}

int sqr(int n){
    n=  n*n;
    printf("Square = %d\n", n);
}
/* here the value of n and number is alredy chnaged but it 
still prints unchanged value this is because number was called by
value and not path in the func so it created a copy of itself. */