//array in c
#include<stdio.h>
void main()
{
 int a[]={12,34,56,78,90};
 int i;
 printf("array elemet adresss :\n");
 for (i=0;i<5;i++)
 {
     printf("%d\n",&a[i]);
 }
 printf("array elemet are : \n");
 for (i=0;i<5;i++)
 {
     printf("%d\n",a[i]);
 }
 
}