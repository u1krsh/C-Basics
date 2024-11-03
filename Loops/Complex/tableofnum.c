#include <stdio.h>

int main(){
    int a;
    int b =1 ;
    printf("Enter an integer: ");
    scanf("%d", &a);

    for(int i=1; i<=10;i++){
        b= i*a;
        printf("%d", a);
        printf(" * ");
        printf("%d", i);
        printf(" = ");
        printf("%d \n", b);

    }
}