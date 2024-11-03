#include <stdio.h>

int main(){
    char hell[100];
    char ch;
    int i = 0;

    for(i = 0; ch != '\n'; i++){
        scanf("%c", &ch);
        hell[i] = ch;
        
    }
    hell[i] = '\0';
    puts(hell);
    return 0;
}