//when we increase pointer by one so its value increase
//by 4 according to int type pointer.
#include<stdio.h>
void main()
{
 int a=12,*ptr;
 ptr=&a;
 printf("%d\n",&a);
 printf("%d\n",ptr);
 printf("%d\n",*ptr);
 ptr++;
 printf("%d\n",&a);
 printf("%d\n",ptr);
}