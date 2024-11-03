#include <stdio.h>

int table(int n);

int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    table(n);
    return 0;
}

int table(int n){
    int a = 1;
    for(int i = 1;i <=10;i++){
        a = i*n;
        printf("%d \n",a);
    }
      
}