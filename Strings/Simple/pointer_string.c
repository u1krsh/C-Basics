#include <stdio.h>

int main(){
    char *canChange = "Hello, world!";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[] = "Hello, world!";
    puts(cannotChange);
    //cannotChange = "Hello"; cannot be reinitialized 
    return 0;
}