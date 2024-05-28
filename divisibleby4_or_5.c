//3  4  5 
#include<stdio.h>
void main()
{
  int num;
  printf("enter  a num :");
  scanf("%d",&num);//18
  if(num%3==0 && num%4==0 && num%5==0)
  {
    printf("num is divisible by 3,4,5");
  }
  else if(num%3==0 && num%4==0)
  {
     printf("num is divisible by 3,4");
  }
   else if(num%3==0 && num%5==0)
  {
     printf("num is divisible by 3,5");
  }
   else if(num%4==0 && num%5==0)
  {
     printf("num is divisible by 4,5");
  }
   else if(num%3==0)
  {
     printf("num is divisible by only 3");
  }
   else if(num%5==0)
  {
     printf("num is divisible by only 5");
  }
  else{
    printf("num is divisible by only 4");
  }
}