//we can change a varible value using pointer.
#include<stdio.h>
void main()
{
  int a=12,*ptr;
  ptr=&a;
  printf("value of a =%d\n",a);//12
  printf("value of a =%d\n",*ptr);//12
  *ptr=90;
  printf("value of a =%d\n",a);//90
  printf("value of a =%d\n",*ptr);//90

}