#include <stdio.h>

int main(){
    int x;
    printf("Enter Number To Check :");
    scanf("%d",&x);
    if(x%2==0){
        printf("%d is Divisible by 2",x);
    }
    else{
        printf("%d is not Divisible by 2",x);
    }
}