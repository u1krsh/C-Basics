#include <stdio.h>
#include <string.h>
typedef struct BankDetails{
    char name[100];
    int acc_num;
}bnk;

int main(){
    bnk c1;
    strcpy(c1.name,"Uttkarsh");
    c1.acc_num = 1234567890;
    printf("%s\n%d\n", c1.name, c1.acc_num);
    return 0;
}