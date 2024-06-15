//wap to print factorial of any number using recurion.
#include<stdio.h>
int factorial(int num)//4
{
  if(num==0)
  {
    return 1;
  }
  return num*factorial(num-1);
        //4 * factorial(3)
        //    3 * factorial(2)
        //        2 * factorial(1)
        //             1 *factoral(0)
                          
}
void main()
{
  printf("factoreial = %d \n",factorial(4));
  
}