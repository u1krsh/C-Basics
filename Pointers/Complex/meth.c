#include <stdio.h>

int meth(int a,int b ,int *sum, int *pro,int *avg);
int main(){
    int x = 10, y = 20;
    int sum,pro,avg;
    meth(x, y, &sum, &pro, &avg);
    printf("Sum = %d\nProduct = %d\nAvegrage = %d\n",sum, pro,avg);
    return 0;
}

int meth(int a,int b,int *sum ,int *pro ,int *avg){
    *sum = a + b;
    *pro = a * b;
    *avg = (a +b)/2;
}