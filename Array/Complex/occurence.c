#include <stdio.h>

int main(){
    int n[] = {5, 3, 8, 8, 2, 5, 9, 3, 7, 7, 7, 1, 6, 2, 4, 4, 8, 6, 5, 9};
    int size = sizeof(n)/sizeof(n[0]);
    int x,count=0;
    scanf("%d",&x);
    for(int i=0; i<size; i++){
        if(n[i] == x){
            count++;
        }
    }
    printf("Number of occurrences of %d: %d\n",x,count);
    return 0;
}