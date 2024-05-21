//print sum of individula digit of three digit number.
#include<stdio.h>
void main()
{
 int num,a,b,c,sum;
 printf("enter a num :");
 scanf("%d",&num);
 a=num/100;
 b=(num/10)%10;
 c=num%10;
 sum=a+b+c;
 printf("sum of individual digitv= %d",sum);

}