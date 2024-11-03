#include<stdio.h>
long factorial(int n)
{
if(n==0)
return 1;
else
return(n *factorial(n-1));
}
void main()
{
int number;
long fact;
printf("Enteranumber:");
scanf("%d", &number); fact =
factorial(number);
printf("Factorialof%dis%ld\n",number, fact);
}