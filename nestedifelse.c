// wap to check given number even-positive or
// even-negative or odd -positive or odd-negative.
#include<stdio.h>
void main()
{
  int num;
  printf("enter a num : ");
  scanf("%d",&num);//-13
  if(num%2==0)
  {
    if(num>0)
    {
      printf("even - positive");  
    }
    else{
          printf("even - negative");
    }
  }
  else
  {
    if(num>0)
    {
    printf("odd - positive");
    }
    else{
    printf("odd - nagative");
    }
  }
}