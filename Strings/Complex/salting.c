#include <stdio.h>
#include <string.h>
int main(){
    char pass[100];
    printf("Enter password: ");
    gets(pass);
    char salt[] = "123";
    strcat(pass,salt);
   printf("%s",pass);
    return 0;
}
