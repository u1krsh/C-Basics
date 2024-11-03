#include <stdio.h>

void print_hello(int count);
int main(){
    print_hello(5);
    return 0;
}

void print_hello(int count){
    if (count==0){
        return;
    }
    printf("hello \n");
    print_hello(count-1);

}