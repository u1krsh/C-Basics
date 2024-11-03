#include <stdio.h>

int main(){
    int n[] = {0,1,2,3,4,5,6,7};
    int size = sizeof(n)/sizeof(n[0]);
    for(int i=size-1; i>=0 ; i--){
        printf("%d ", n[i]);
    }
    return 0;
}