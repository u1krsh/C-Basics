#include <stdio.h>

float perc(float sci,float mth, float san);
int main(){
    float science, mathematics, sanskrit;
    printf("Enter marks in science: ");
    scanf("%f",&science);
    printf("Enter marks in mathematics: ");
    scanf("%f",&mathematics);
    printf("Enter marks in Sanskrit: ");
    scanf("%f",&sanskrit);
    printf("%f %", perc(science,mathematics,sanskrit));
    return 0;
}

float perc(float sci, float mth, float san ) {
    float total = sci + mth + san;
    float percentage = (total / 3) * 100;
    return percentage;
}