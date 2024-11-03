#include <stdio.h>
int comp(int a, int b, int *c);
int main(){
    int x = 10, y= 20 ,z = 0;
    comp(x, y, &z);
    printf("The larger number is %d\n", z);
    return 0;
}
int comp(int a, int b,int *c) {
    if (a>b){
        *c = a;
    }
    else{
        *c = b;
    }
}