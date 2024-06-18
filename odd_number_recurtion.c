#include<stdio.h>
void odd_number()
{
   static int i=1;
   if(i%2==1)
   {
    printf("%d ",i);
   }
   i++;
   if(i<=20)
   {
    odd_number();
   }

}
void main()
{
 odd_number();
}