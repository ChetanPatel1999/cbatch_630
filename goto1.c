#include<stdio.h>
void main()
{
 int i=1;
 lab1:
 printf("hi students\n");
 i++;
 if(i<=5)
 {
    goto lab1;
 }
 printf("after goto stmnet");
}