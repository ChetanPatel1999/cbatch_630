#include<stdio.h>
void main()
{
 int i=1;
 printf("hi students\n");
 i++;
 if(i<=5)
 {
    goto la;
 }
 printf("one more line");
 la:
 printf("after goto stmnet");
}