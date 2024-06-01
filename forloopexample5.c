//wap to print even numbers.
#include<stdio.h>
void main()
{
 int i;
 printf("even number series 1 to 20 : ");
 for(i=1;i<=20;i++)//21
 {
   if(i%2==0)
   {
     printf("%d ",i);//2 4 6 8...20
   }
 }
}