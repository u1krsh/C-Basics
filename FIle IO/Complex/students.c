#include <stdio.h>
struct student{
    char name[100];
    int roll_no;
    float cgpa;
};
int main(){
    struct student s1;
    gets(s1.name);
    scanf("%d", &s1.roll_no);
    scanf("%f", &s1.cgpa);
    FILE *f ;
    f = fopen("test.txt", "a");
    fprintf(f, "\nName:%s\nRoll:%d\nCgpa:%0.2f\n", s1.name, s1.roll_no, s1.cgpa);
    return 0;
}