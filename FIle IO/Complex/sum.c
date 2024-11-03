#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("test.txt", "r");
    int a,b;
    fscanf(file, "%d", &a);
    fscanf(file, "%d", &b);
    fclose(file);
    file = fopen("test.txt", "w");
    fprintf(file, "%d", a+b);
    return 0;
}