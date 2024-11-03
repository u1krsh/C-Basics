#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("hello.txt", "a");
    fprintf(fptr, "%s", " mango");
    fclose(fptr);
    return 0;
}