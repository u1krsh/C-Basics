#include <stdio.h>

int main() 
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
if (marks < 0|| marks > 100) {
        printf("Invalid marks.");

    }
else
{        
    if (marks <30){
        printf("%d C", marks);
    } 
    else if (marks <= 30 || marks >70){
        printf("%d B", marks);
    }
    else if (marks <= 70 || marks >90){
        printf("%d A", marks);
    }
    else if (marks <= 90 || marks >= 100){
        printf("%d A+", marks);
    } 
}


    

}