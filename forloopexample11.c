//wap to print factoraial of given number.
#include<stdio.h>
void main()
{
int num,i,fact=1;
printf("enter a num :");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
    fact=fact*i;
}
printf("factorial of %d = %d",num,fact);
}