#include <stdio.h>

int main (){
    char a;
    printf("Enter Charecter:");
    scanf("%c",&a);
    if(a>='0' && a<='9'){
        printf("%c is a digit",a);

    }
}