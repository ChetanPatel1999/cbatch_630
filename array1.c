//array in c
#include<stdio.h>
void main()
{
 int a[]={12,34,56,78,90};
 printf("size of array = %d\n",sizeof(a));
 printf("array elemet adresss :\n");
 printf("%d\n",a); // base address display
 printf("%d\n",&a[0]);
 printf("%d\n",&a[1]);
 printf("%d\n",&a[2]);
 printf("%d\n",&a[3]);
 printf("%d\n",&a[4]);
 printf("array elemet are : \n");
 printf("%d\n",a[0]);
 printf("%d\n",a[1]);
 printf("%d\n",a[2]);
 printf("%d\n",a[3]);
 printf("%d\n",a[4]);
}