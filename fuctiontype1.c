//no return type no argument
#include<stdio.h>
void add()
{
    int a,b,c;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum = %d",c);
}
void main()
{
 add();
}