#include <stdio.h>

int main(){
    int n[] = {70, 56, 98, 33, 2, 31, 31, 16, 54, 48, 98, 92, 45, 64, 49};
    int size = sizeof(n)/sizeof(n[0]);
    int largest = n[0];

    for(int i = 1; i < size; i++){
        if(n[i] > largest){
            largest = n[i];
        }
    }
    printf("Largest number: %d\n", largest);
    return 0;
}