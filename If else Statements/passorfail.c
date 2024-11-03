#include <stdio.h>

int main(){
    int makrs;
    printf("Enter Marks");
    scanf("%d", &makrs);

    if(makrs < 0 || makrs> 100){
        printf("Invalid Marks");
        return 0;
    }
    else if (makrs >=0)
    {
        if(makrs> 30 ){
            printf("%d Pass",makrs);
        }
        else if (makrs <= 30 )
        {
            printf("%d Fail",makrs);
        }
        
    }
    
}