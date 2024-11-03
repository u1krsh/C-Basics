#include <stdio.h>

void hello();
void goobye();

void hello(){
    printf("Hello!\n");
}

void goobye(){
    printf("Goodbye!\n");
}

int main(){
    hello();
    goobye();
    return 0;
}