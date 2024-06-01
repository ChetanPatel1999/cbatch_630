// wap to print sum of 1 to n even numbers.
#include<stdio.h>
void main()
{
 int i,sum=0,n;
 printf("enter n value : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)//
 {
  if(i%2==0)
  {
    sum=sum+i;
  }
 }
 printf("sum 1 to %d even numbers= %d\n",n,sum);
 }
