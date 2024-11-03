#include <stdio.h>

int main(){
    char inp[100];
    char ch;
    gets(inp);
    scanf("%c",&ch);
    for(int i=0; inp[i] != '\0'; i++){
        if(inp[i] == ch){
            printf("Character found at position %d\n", i+1);
        }
    }
    return 0;
}