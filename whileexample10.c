//wap to print factors of given number.
#include<stdio.h>
void main()
{
 int i=1,num;
 printf("enter a num :");
 scanf("%d",&num);//15
 while(i<=num)
 {
    if(num%i==0)
    {
        printf("%d ",i);
    }
    i++;
 }

 
}