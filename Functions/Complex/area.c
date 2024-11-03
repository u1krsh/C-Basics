#include <stdio.h>

void area_square(int side);
void area_rect(int lenth, int breadth);
void area_circle(float height ,float base);
int main(){
    int x;
    printf("Choose the shape(1 for Square 2 for Rectangle 3 for Circle): \n");
    scanf("%d",&x);
    if(x==1){
        int side;
        printf("Enter the side length of square: \n");
        scanf("%d",&side);
        area_square(side);
    }
    else if (x==2){
        int lenth, breadth;
        printf("Enter the length and breadth of rectangle: \n");
        scanf("%d %d",&lenth, &breadth);
        area_rect(lenth, breadth);
    }
    else if (x==3){
        float height, base;
        printf("Enter the height and base of circle: \n");
        scanf("%d %d",&height, &base);
        area_circle(height, base);
    }
    else{
        printf("Invalid input\n");
    }
    return 0;
}

void area_square(int side){
    printf("Area of square: %d\n", side * side);
}

void area_rect(int lenth, int breadth){
    printf("Area of rectangle: %d\n", lenth * breadth);
}

void area_circle(float height , float base){
    printf("Area of circle: %.2f\n", 0.5 * height * base);
}