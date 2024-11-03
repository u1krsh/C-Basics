#include <stdio.h>
int main(){
    int a ;
    for(int i=0; i<= 100;i++){
        printf("Enter a number: ");
        scanf("%d", &a); 
        if (a%7 ==0){
            printf("The number is Multiple of Seven %d", a);
            break;
        }
    }
}