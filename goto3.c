//print 1 to 10 number using goto stmnet.
#include<stdio.h>
void main()
{
 int i=1;
 l:
 printf("%d \n",i);
 i++;
 if(i<=10)
 {
    goto l;
 }
 printf("after goto stmnet");
}