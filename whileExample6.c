//wap to print table of given number.
#include<stdio.h>
void main()
{
 int i=1,n;
 printf("enter a num :");
 scanf("%d",&n);
 while(i<=10)
 {
    printf("%d\n",i*n);
    i++;
 }
}