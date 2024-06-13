//with return type,with argumnet 
#include<stdio.h>
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
float sub(float a,float b)
{
  float c;
  c=a-b;
  return c;  
}
int factorial(int num)//5
{
    int fact=1,i;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;//120
    }
    return fact;
}
int display(int a)
{
    printf("hi i am display\n");
    return a;
    printf("after retuen statment\n");
}
void main()
{
 int res;
 res=add(12,5);
 printf("sum = %d\n",res);
 printf("sum = %d\n",add(5,7));
 printf("sub = %.2f\n",sub(12.5,7.1));
 int ans;
 ans=factorial(5);
 printf("factorial = %d\n",ans);
 display(12);
}