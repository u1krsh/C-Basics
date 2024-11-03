#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("input.txt", "w");
    int n;
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        if(i%2!=0){
            fprintf(file, "%d ", i);
        }
    }
    fclose(file);
    return 0;
}