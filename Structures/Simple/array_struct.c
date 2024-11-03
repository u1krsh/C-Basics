#include <stdio.h>
struct student{
    char *name;
    int roll_num;
    float cgpa;
};
int main(){
    struct student ECE[100];//array inside structure
    ECE[0].name = "Uttkarsh";
    ECE[0].roll_num = 1;
    ECE[0].cgpa = 8.0;
    printf("%s\n%d\n%0.1f", ECE[0].name,ECE[0].roll_num,ECE[0].cgpa);
    return 0;
}