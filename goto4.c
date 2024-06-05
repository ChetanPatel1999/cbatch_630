//print 1 to 10 number using goto stmnet.
//wap to print even numbers using goto stmnt.
#include<stdio.h>
void main()
{
 int i=1;
 l:
  if(i%2==0)
  {
    printf("%d ",i);
  }

 i++;
 if(i<=20)
 {
    goto l;
 }
}