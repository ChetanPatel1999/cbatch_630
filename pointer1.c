#include<stdio.h>
void main()
{
 int a,*ptr;
 a=12;
 ptr=&a;
 printf("value of a  = %d\n",a);
 printf("address of a = %d\n",&a);
 printf("adress of a by ptr = %d\n",ptr);
 printf("value of a by ptr = %d\n",*ptr);
 printf("address of ptr = %d\n",&ptr);
}