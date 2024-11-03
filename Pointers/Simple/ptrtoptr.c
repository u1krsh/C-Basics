#include <stdio.h>

int main(){
    float x = 10.0;
    float *ptr = &x;
    float **pptr = &ptr;
    
    printf("x = %f\n",x);
    printf("ptr = %f\n",*ptr);
    printf("pptr = %f\n",**pptr);
    return 0;
}