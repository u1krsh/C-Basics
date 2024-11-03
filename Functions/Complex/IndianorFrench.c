/*Write a function that prints Namaste if user is Indian
& Bonjour if the user is French.*/
#include <stdio.h>

void indian();
void french();
void indian(){
    printf("Namaste\n");
}
void french(){
    printf("Bonjour\n");
}
int main(){
    char inp;
    printf("Enter i for Indian and f for french: ");
    scanf("%c",&inp);
    if(inp == 'i' || inp =='I'){
        indian();
    }
    else if(inp =='f' || inp =='F'){
        french();
    }
    else{
        printf("Invalid input\n");
    }
    return 0;
}