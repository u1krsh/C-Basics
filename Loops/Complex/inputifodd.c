#include <stdio.h>
int main(){
    int a ;
    for(int i=0; i<= 100;i++){
        printf("Enter a number: ");
        scanf("%d", &a); 
        if (a%2 !=0){
            printf("The number is odd %d", a);
            break;
        }
    }
}