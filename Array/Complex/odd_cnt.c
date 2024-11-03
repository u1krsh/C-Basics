#include <stdio.h>

int main(){
    int n[] = {70, 56, 98, 33, 2, 31, 31, 16, 54, 48, 98, 92, 45, 64, 49};
    int count = 0;
    int size = sizeof(n) / sizeof(n[0]);
    for(int i = 0; i < size;i++){
        if (n[i]%2==0) continue;
        else count++;
    }
    printf("Number of odd elements: %d\n", count);
    return 0;
}