//wap to print factoraial of given number.
#include<stdio.h>
void main()
{
 int i=1,num,fact=1;
 printf("enter a num :");
 scanf("%d",&num);//3
 while(i<=num)
 {
    fact=fact*i;//6
    i++;
 }
 printf("factorial of %d = %d",num,fact);
 
}