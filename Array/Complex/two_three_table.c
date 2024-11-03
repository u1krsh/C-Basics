#include <stdio.h>

int main(){
    int i,j;
    int two= 1,three = 1;
    int n[10][2];
   for(int j = 1; j <= 10; j++){}
     for(int i=1; i<=10; i++){
        int two = 2 *i;
        int three = 3 * i;
        n[i][0] = two; 
        n[i][1] = three;
    }
    for(int i = 1; i <= 10; i++){
        printf("Row %d: %d %d\n", i, n[i][0], n[i][1]);
    }
}
