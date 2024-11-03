#include <stdio.h>

struct complex {
int real;
int img;
};
int main(){
   struct complex numberl = {5,8};
   struct complex *Ptr = &numberl;
   printf("real part %d\n",Ptr->real);
   printf ("img part = %d\n",Ptr->img);
   return 0;
}