//wap to sum of array elemnet.
#include<stdio.h>
void main()
{
 int a[]={1,34,56,78,90};
 int i,sum=0;
 printf("array elemet are : \n");
 for (i=0;i<5;i++)
 {
     printf("%d\n",a[i]);
 }
 //sum of array element
 for(i=0;i<5;i++)
 {
    sum=sum+a[i];//102
 }
 printf("sum of array elemet = %d",sum);
}