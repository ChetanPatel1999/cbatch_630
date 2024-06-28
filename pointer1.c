#include<stdio.h>
void main()
{
 int a,*ptr;
 a=12;
 ptr=&a;
 printf("value of a  = %d\n",a);//12
 printf("address of a = %d\n",&a);//456789
 printf("adress of a by ptr = %d\n",ptr);//456789
 printf("value of a by ptr = %d\n",*ptr);//12
 printf("address of ptr = %d\n",&ptr);//896745
}