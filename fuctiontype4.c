//with return type,but no argument
#include<stdio.h>
int add()
{
    int a,b,c;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
void main()
{
 int a=add();
 printf("sum = %d\n",a);
 printf("sum = %d\n",add());
}