//we can change a varible value using pointer.
#include<stdio.h>
void main()
{
  int a=12,*ptr;
  ptr=&a;
  printf("value of a =%d\n",a);
  printf("value of a =%d\n",*ptr);
  *ptr=90;
  printf("value of a =%d\n",a);
  printf("value of a =%d\n",*ptr);

}