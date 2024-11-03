#include <stdio.h>

int fib(int i){
        if(i==0){
            return 0;
        }
        if (i==1){
            return 1;
        }
        else{
            return fib(i-1) + fib(i-2);
        }
    }
int main(){

        int n;
        printf("Enter Number: ");
        scanf("%d", &n);
        for(int X=0; X<n; X++){
         if (n >=0){
            printf("%d ", fib(X));

        }
        }

}