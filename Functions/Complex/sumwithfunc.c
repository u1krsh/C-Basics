#include <stdio.h>

int sum(int a,int b);

int main(){
    int one;
    int two;
    printf("Enter Number :");
    scanf("%d",&one);
    printf("Enter Number :");
    scanf("%d",&two);
    int s = sum(one, two);
    printf("Sum : %d", s);

    return 0;
}

int sum(int a, int b){
    return a + b;
}