#include <stdio.h>

int printArray(int arr[],int n){
    for(int i= 0;i<n;i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    return 0;
}