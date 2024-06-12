#include<stdio.h>
void add() 
{
 int a,b,c;
 printf("enter two values : ");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("sum = %d\n",c);
}
void sub() 
{
 int a,b,c;
 printf("enter two values : ");
 scanf("%d%d",&a,&b);
 c=a-b;
 printf("sub = %d\n",c);
}
void main()
{
 add();
 sub();
}
