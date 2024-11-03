#include <stdio.h>

int main(){
    float pri[3];
    printf("Enter First Price: ");
    scanf("%f",&pri[0]);
    printf("Enter Second Price: ");
    scanf("%f",&pri[1]);
    printf("Enter Third Price: ");
    scanf("%f",&pri[2]);
    float total = (pri[0] + pri[1] + pri[2]) * 1.8;
    printf("Total Price: %0.2f", total);
    

    return 0;
}
