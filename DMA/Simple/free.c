#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)malloc(sizeof(int)*5);
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    for(int i = 0; i < 5; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr); 
    ptr = (int*)malloc(sizeof(int)*10);
    for(int i = 0; i < 10; i++){
        printf("%d ", ptr[i]);
    }
    return 0;
}