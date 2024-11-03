#include <stdio.h>

int main(){
    int roll[5];
    int *ptr = &roll[0];
    int size = sizeof(roll)/sizeof(roll[0]);
    for (int i = 0; i < size ; i++){
        scanf("%d", &roll[i]);
        ptr++;
    }
    for (int i = 0; i < size; i++){
        printf("%d : %d\n", i,roll[i]);
    }
    
    return 0;
}