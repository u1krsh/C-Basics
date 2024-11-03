#include <stdio.h>
int sum_num(int nat);

int main(){
   printf("%d\n", sum_num(4));
    return 0;
}

int sum_num(int nat){
    if (nat == 1){
        return 1;
    }
    int sumn = sum_num(nat-1);
    int sumn1 = sumn+nat;
    return sumn1; 
}