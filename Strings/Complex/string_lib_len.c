#include <stdio.h>
#include <string.h>

int main(){
    char name[] = "uttkarsh";
    //fgets(name,100,stdin);
    puts(name);
    printf("Length of the string: %lu\n", strlen(name));
    return 0;
}