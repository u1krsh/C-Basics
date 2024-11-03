#include <stdio.h>
int swap(int *a,int *b);
int main(){
    int a = 5,b = 6;
    swap(&a,&b); 
    printf("a1 = %d, b1 = %d\n", a,b );
    return 0;
}
int swap(int *a,int *b){
    int c=0;
    c = *a;
    *a = *b;
    *b = c;
    printf("a = %d, b = %d\n", *a,*b );
}