#include <stdio.h>
#include <string.h>
int main(){
    char first[] = "Hello";
    char second[] = " World";
    strcat(first, second);
    puts(first);
    return 0;
}