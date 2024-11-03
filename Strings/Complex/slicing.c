#include <stdio.h>
int slice(char strr[], int n,int m){
    for (int i=n;i<=m;i++){
        printf("%c", strr[i]);
    }
}
int main(){
    char str[100];
    gets(str);
    int n,m;
    scanf("%d %d",&n,&m);
    slice(str,n,m);
    return 0;
}