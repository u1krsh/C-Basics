#include <stdio.h>
#include <string.h>
typedef struct HouseAddress{
    int house_number;
    char block;
    char city[100];
    char state[100];
}addr;
int main(){
    struct HouseAddress people[10];
    for(int i=0; i<5; i++){
        printf("Enter house number: ");
        scanf("%d", &people[i].house_number);
        getchar();
        printf("Enter block: ");
        scanf(" %c", &people[i].block);
        getchar();
        printf("Enter city: ");
        gets(people[i].city);

        printf("Enter state: ");
        gets(people[i].state);
        
    }
    for(int i = 0; i < 5; i++){
        printf("House number: %d\nBlock: %c\nCity: %s\nState: %s\n", people[i].house_number, people[i].block, people[i].city, people[i].state);
        printf("\n");
    }
    return 0;
}