#include <stdio.h>

int cum(int num);

int main(){
    printf("%d", cum(0));  
    return 0;
}

int cum(int num){ 
    if (num == 0){
        return 1;
    }
    int sumn = cum(num-1);
    int sum1 = sumn * num;
    return sum1;
}