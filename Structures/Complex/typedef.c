#include <stdio.h>
#include <string.h>
typedef struct ComputerScienceEngineer{
    char name[100];
    int roll;
    float cgpa;
}cse;
int main(){
    cse s1;
    strcpy(s1.name,"Uttkarsh");
    s1.roll = 1;
    s1.cgpa = 8.0;
    printf("%s\n%d\n%f\n", s1.name, s1.roll,s1.cgpa);

    return 0;
}