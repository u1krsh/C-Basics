#include <stdio.h>

int main(){
    int age = 10;
    int *ptr = &age;
    int _age = *ptr;
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u", &ptr);
    return 0;
}