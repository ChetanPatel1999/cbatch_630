//wap to check given  number is positive or negative or zero.
#include<stdio.h>
void main()
{
 int num;
 printf("enter a num :");
 scanf("%d",&num);//0
 if(num>0)
 {
   printf("positive number");
 }
 else if(num<0)
 {
    printf("negative number");
 }
 else
 {
    printf("zero number");
 }
}