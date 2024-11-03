#include <stdio.h>

int main(){
    char name[100];
    int len = 0;
    fgets(name, 100,stdin);
    puts(name);
    for(int i=0;name[i] != '\0';i++){
        len++;
    }
    printf("Length of the string: %d\n", len-1);
    return 0;
}