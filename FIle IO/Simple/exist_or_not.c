#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("hello.txt", "r");
    if(fptr == NULL){
        printf("Error! Could not open file");
    }
    else{
        fclose(fptr);
    }
    
    return 0;
}