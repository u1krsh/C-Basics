#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll_no;
    float marks;
};
int main(){
    struct student s1;
    //s1.name= "Utkarsh";
    strcpy(s1.name, "Utkarsh");
    s1.roll_no = 1;
    s1.marks = 95.3;
    printf("%s\n", s1.name);
    printf("%d\n", s1.roll_no);
    printf("%0.2xf", s1.marks);
    return 0;
}