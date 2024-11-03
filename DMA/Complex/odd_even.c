#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int)); 
    int n=0;
    for(int i=1; n<5; i+=2){
        if(i%2!=0){
            ptr[n] = i;
            n++;
        }
    }
    for(int i=0; i<5; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");
      ptr = (int*)realloc(ptr, 6 * sizeof(int));

    n = 0;
    for(int i=0; n<6; i+=2){
            ptr[n] = i;
            n++;
    }
    
    for(int i=0; i<6; i++){
        printf("%d ", ptr[i]);
    }   
    return 0;
}
