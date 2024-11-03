#include <stdio.h>
struct vector{
    float x;
    float y;
};
int main(){
    struct vector v1 = {3, 4};
    struct vector v2 = {6, 8};
    printf("%0.1fi %0.1fj", v1.x+v2.x, v1.y+v2.y);

    return 0;
}