#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("test.txt", "r");
    int i;
    for (int a=1; a<=5;a++) {
    fscanf(file,"%d",&i);
    printf("%d ",i);
    }
    return 0;
}