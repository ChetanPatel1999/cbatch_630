//wap to print sum 1 to 20 only even numbers.
#include<stdio.h>
void main()
{
 int i=1,sum=0;
 while(i<=20)
 {
    if(i%2==0)
    {
        sum=sum+i;//110
    }
   i++;
 }
 printf("sum of 1 to 10 = %d",sum);
}