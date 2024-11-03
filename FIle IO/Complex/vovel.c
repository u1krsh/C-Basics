#include <stdio.h>

int main(){
    FILE *file;
    char ch;
    char vovel[] = "aeiouAEIOU";
    int count = 0;
    file = fopen("test.txt", "r");
    
        while((ch = fgetc(file)) != EOF){
           for(int i = 0; vovel[i]!= '\0'; i++){
            if(ch == vovel[i]){
                count++;
                break;
            }
    }
    }
    printf("%d",count);
    return 0;
}