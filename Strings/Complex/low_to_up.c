#include <stdio.h>

int main(){
    char vowel[] = "aeiouAEIOU";
    char inp[100];
    gets(inp);
    for(int i=0; vowel[i] != '\0';i++){
        for(int j = 0; inp[j] != '\0'; j++){
            if(inp[j] == vowel[i]){
                switch(inp[j]){
                    case 'a': inp[j] = 'A'; break;
                    case 'e': inp[j] = 'E'; break;
                    case 'i': inp[j] = 'I'; break;
                    case 'o': inp[j] = 'O'; break;
                    case 'u': inp[j] = 'U'; break;
                }
            }
        }
    }
    puts(inp);

    return 0;
}
