#include <stdio.h>

int print_char(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c ",arr[i]);
    }printf("\n");
}
int main(){
    char firstName[] = "Uttkarsh";
    char lastName[] = "Singh";
    print_char(firstName);
    print_char(lastName);
    return 0;
}