#include <stdio.h>

float celfar(float inp);

int main(){
    float inp;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &inp);
    printf("%f F", celfar(inp));
    return 0;
}

float celfar(float inp){
    float far = inp*1.8+32;
    return far;
}