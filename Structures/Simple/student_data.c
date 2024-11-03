#include <stdio.h>

struct students{
    char *name[100];
    int roll_no;
    float cgpa;
};
int main(){
    struct students a;
    struct students b;
    struct students c;
    printf("Enter details of student a:\n");
    scanf("%s %d %f\n", &a.name, &a.roll_no, &a.cgpa);
    scanf("%s %d %f\n", &b.name, &b.roll_no, &b.cgpa);
    scanf("%s %d %f\n", &c.name, &c.roll_no, &c.cgpa);
    printf("%s %d %f\n", a.name, a.roll_no, a.cgpa);
    printf("%s %d %f\n", b.name, b.roll_no, b.cgpa);
    printf("%s %d %f\n", c.name, c.roll_no, c.cgpa);
    
    return 0;
}