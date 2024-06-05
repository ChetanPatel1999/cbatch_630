#include<stdio.h>
void main()
{
  int i=1;
  while(i<=10)
  {
     i++;//11
    if(i==5)
    {
        continue;
    }
    printf("%d ",i);//2 3 4 6  7 8 9   10 11
  
  }
}