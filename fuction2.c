#include<stdio.h>
void add() //defination
{
 int a,b,c;
 printf("enter two values : ");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("sum = %d\n",c);
}
void main()
{
  printf("hi i am main fuction\n");
  add();//fuction calling
  printf("again inside main fuction\n");
  add();//fuction calling 2
  printf("end of main fuction\n");
}
