#include <stdio.h>

int main(){
    FILE *file;
    file = fopen("test.txt", "w");
    char name[1024];
    int roll;
    float cgpa;
    
    printf("Enter name: ");
    gets(name);
    
    printf("Enter roll number: ");
    scanf("%d", &roll);
    
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    
    fprintf(file, "Name: %s\nRoll Number: %d\nCGPA: %.2f\n", name, roll, cgpa);
    fclose(file);
    return 0;
}