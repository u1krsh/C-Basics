#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("hello.txt", "w");
    char ch = 'A';
    fprintf(fptr, "%c", ch);
    fprintf(fptr, "%s", "Hello, world!");
    fclose(fptr);
    return 0;
}