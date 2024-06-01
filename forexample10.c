//wap to print table of given  number.
#include<stdio.h>
void main()
{
 int i,n,tab;
 printf("enter a num : ");
 scanf("%d",&n);//5
 printf("table of %d : \n",n);
 for(i=1;i<=10;i++)//2
 {
    tab=i*n;
    printf("%d * %d = %d \n",n,i,tab);
 }
}