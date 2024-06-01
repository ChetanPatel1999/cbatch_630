//wap to print odd numbers series.
#include<stdio.h>
void main()
{
 int i;
 printf("odd number series 1 to 20 : ");
 for(i=1;i<=20;i++)//21
 {
   if(i%2==1)
   {
     printf("%d ",i);//1 3 5 7 9...19
   }
 }
}