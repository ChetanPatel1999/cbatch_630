#include<stdio.h>
int factorial(int num)//3
{
    static int fact=1;
    fact=fact*num;//120
    num--;//0
    if(num>0)
    {
        factorial(num);
    }
    return fact;
}
void main()
{
  printf("factoreial = %d \n",factorial(4));
}