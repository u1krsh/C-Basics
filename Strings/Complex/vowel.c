#include <stdio.h>

int main(){
    int count = 0;
    char vowel[] = "aeiouAEIOU";
    char inp[100];
    gets(inp);
    for(int i=0; vowel[i] != '\0';i++){
        for(int j = 0; inp[j] != '\0'; j++){
            if(inp[j] == vowel[i]) count++;
        }
    }
    printf("%d\n",count);

    return 0;
}